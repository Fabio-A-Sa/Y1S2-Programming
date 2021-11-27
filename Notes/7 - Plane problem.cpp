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

    vector<Fruta*> frutas1 = {};
    Fruta f11 = Fruta("Maca"); frutas1.push_back(&f11);
    Fruta f21 = Fruta("Banana"); frutas1.push_back(&f21);
    Fruta f31 = Fruta("Pera"); frutas1.push_back(&f31);

    vector<Fruta*> frutas2 = {};
    Fruta f12 = Fruta("Maca"); frutas2.push_back(&f12);
    Fruta f22 = Fruta("Banana"); frutas2.push_back(&f22);
    Fruta f32 = Fruta("Pera"); frutas2.push_back(&f32);

    vector<Fruta*> frutas3 = {};
    Fruta f13 = Fruta("Maca"); frutas3.push_back(&f13);
    Fruta f23 = Fruta("Banana"); frutas3.push_back(&f23);
    Fruta f33 = Fruta("Pera"); frutas3.push_back(&f33);

    vector<Cesta*> cestas = {};
    Cesta cesta1 = Cesta(frutas1); cestas.push_back(&cesta1);
    Cesta cesta2 = Cesta(frutas2); cestas.push_back(&cesta2);
    Cesta cesta3 = Cesta(frutas3); cestas.push_back(&cesta3);
    Armario armario = Armario(cestas);

    /**
     * Na segunda cesta do armário, a segunda fruta era "Banana"
     * Vai ser mudada para "Morango" e espera-se que o armário perceba a diferença :)
     */
    armario.getCestas()[1]->getFruta()[1]->setName("Morango");

    for (Cesta *cesta : armario.getCestas()) {
        for (Fruta *fruta : cesta->getFruta())  {
            cout << fruta->name << endl;
        }
        cout << endl;
    }

    return 0;
}
