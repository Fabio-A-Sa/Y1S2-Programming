#include <iostream>
#include <cmath>
#include <array>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <map>
#include <list>
using namespace std;

// Exam PROG 2010-2011 resolution
// Fábio Araújo de Sá

// Question 1 a)

A forma como está escrita a função, permite apenas a inserção de uma palavra na variável "name", uma vez que o buffer, assim que encontra um
espaço, acaba a leitura. Assim, o buffer ainda contém a string "Costa" e completa, incorrectamente, a int age. O número 92 é o código ASCII do char 'C'.

// Question 1 b)

Uma possível solução do problema:
#include <iostream>
#include <string>
int main()
{
	string name; int age;
	cout << "Nome ? "; 
	getline(cin, name);
	cin.clear();
	cin.ignore(1000, '\n');
	cout << "Age ? ";
	cin >> age;
	cout << "Nome = " << name << " and age = " << age << endl;
	return 0;
}

// Question 2 a)

A função mystery2 "apaga" o valor "value" sempre que este ocorre no vector v, puxando todos os valores um index atrás e atualizando,
sempre que isso acontece, o tamanho do mesmo.

// Question 2 b)

1, 2, 3, 4, 5
1, 3, 4, 5

// Question 3

class Point {
	friend double dist(const Point& p1, const Point& p2); //calcula a distância entre p1 e p2
	public:
		Point();
		Point(double x, double y);
		double getX() const; // devolve coordenada x
		double getY() const; // devolve coordenada y
		// outros métodos da classe Point
	private:
		double x, y; //coordenadas do ponto
};

class Polygon {
	public:
		Polygon();
		void addVertex(Point p); // acrescenta vértice ao polígono
		size_t getSize() const; // devolve no de lados do polígono = no de vértices
		Point getVertex(size_t num) const;
		// outros métodos da classe Polygon
	private:
		//A COMPLETAR com estrutura de dados para representar os vértices de um polígono
};

// Question 3 a)

A função dist é externa à classe Point e, para ter acesso direto aos atributos private da classe em questão, deve-se colocar
o qualificativo "friend", para dar mais flexibilidade a esta.

Um exemplo de código dessa função:
#include <cmath>
double dist(const Point& p1, const Point& p2) {

	double x1 = p1.getX(), x2 = p2.getX(), y1 = p2.getY(), y2 = p2.getY();
	return sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));
}

// Question 3 b)

class Polygon {

	public:
		Polygon();
		void addVertex(Point p); // acrescenta vértice ao polígono
		size_t getSize() const; // devolve no de lados do polígono = no de vértices
		Point getVertex(size_t num) const;

	private:
		vector<Point> points // Vector of points;
		int n; // Number of points
		double area; // Are of polygon
};

// Question 3 c)

size_t Polygon::getSize() { return points.size(); }

// Question 3 d)

Polygon t;
Point p1(0.0, 1.0); t.addVertex(p1);
Point p2(1.0, 1.0); t.addVertex(p2);
Point p3(1.0, 0.0); t.addVertex(p3);

// Question 4

class User {

	private:
		string name;
		vector<Message> messages;
	public:
		User(string name);
		string getName() const;
		vector<Message> getMessages() const;
		vector<Message> getMessages(string subject) const;
		void addMessage(Message message);
};

class Message {
	
	friend ostream& operator<<(ostream& os, Message& message);
	private:
		time_t date; //time_t é um inteiro sem sinal
		string content;
	public:
		Message(time_t timeMsg, string content);
		time_t getDate() const;
		string getContent() const;
};

// Question 4 a)

Message::Message(time_t timeMsg, string content) {

	this->date = timeMsg;
	this->content = content;
}

// Question 4 b)

ostream& operator<< (ostream& os, Message& message) {

	os << message.getDate() << endl;
	os << message.getContent() << endl;
	return os;
}

// Question 4 c)

vector<Message> User::getMessages(string subject) const {
		
	vector<Message> answer;
	for (auto mes : messages) {
		if (mes.getContent().find(subject) <= mes.getContent().size()) {
			answer.push_back(mes);
		}
	}
	return answer;
}

// Question 5

unsigned int NPROJECTS = 10;
typedef vector< vector<unsigned int> > Preferences;
typedef vector<unsigned int> Assignments;

// Question 5 a)

Assignments assignFirstPreference(const Preferences& prefs) {

	Assignments result;
	for (auto p : prefs) {
		result.push_back(p[0]);
	}
	return result;
}

// Question 5 b)

vector<int> assignmentsPerProject(const Assignments& assig) {

	vector<int> histo(NPROJECTS);
	for (auto p : assig) {
		histo[p - 1]++;
	}
	return histo;
}