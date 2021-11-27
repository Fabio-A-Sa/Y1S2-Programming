#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Fruta {
public:
    string name;
    Fruta();
    Fruta(string name) {this->name = name;}
    void setName(string name) { this->name = name;}
};

class Cesta {
public:
    vector<Fruta*> frutas;
    Cesta();
    Cesta(vector<Fruta*> frutas) { this->frutas = frutas;}
    vector<Fruta*> getFruta() { return frutas ;}
};

class Armario {
public:
    vector<Cesta*> cestas;
    Armario();
    Armario(vector<Cesta*> cestas) { this->cestas = cestas;}
    vector<Cesta*> getCestas() { return cestas; }

};

int main() {

    vector<Fruta*> frutas = {};
    Fruta f1 = Fruta("Maca"); frutas.push_back(&f1);
    Fruta f2 = Fruta("Banana"); frutas.push_back(&f2);
    Fruta f3 = Fruta("Pera"); frutas.push_back(&f3);

    vector<Cesta*> cestas = {};
    Cesta cesta1 = Cesta(frutas); cestas.push_back(&cesta1);
    Cesta cesta2 = Cesta(frutas); cestas.push_back(&cesta2);
    Cesta cesta3 = Cesta(frutas); cestas.push_back(&cesta3);
    Armario armario = Armario(cestas);

    armario.getCestas()[1]->getFruta()[1]->setName("Morango");
    for (Fruta *fruta : armario.getCestas()[1]->getFruta()) {
        cout << fruta->name << endl;
    }

    return 0;
}