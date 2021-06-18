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

// Exam PROG 2012-2013 resolution
// Fábio Araújo de Sá

// Question 1 a)

unsigned int countValues(int a[], unsigned int nelem, int value)
{
	unsigned int i, count = 0;
	for (i = 0; i < nelem; i++)
		if (a[i] == value)
			count++;
	return count;
}

// Question 1 b)

template<class T>
unsigned int countValues(T a[], unsigned int nelem, T value)
{
	unsigned int i, count = 0;
	for (i = 0; i < nelem; i++)
		if (a[i] == value)
			count++;
	return count;
}

// Question 1 c)

class Person
{	
	friend bool operator== (Person p1, Person p2);
	public:
		Person();
		Person(string name, unsigned int age);
		string getName() const;
		unsigned int getAge() const;
		
	private:
		string name;
		unsigned int age;
};

bool operator== (Person p1, Person p2) {

	return p1.getAge() == p2.getAge() && p1.getName() == p2.getName();
}

// Question 1 e)

class Player : public Person {

	public:
		Player(string name, unsigned int age, string team);
	private:
		string team;
};

Player::Player(string name, unsigned int age, string team) 
	: Person(name, age) 
	{ 
		this->team = team;  
	}

// Question 1 f)

multimap<string, Player>, que, para cada string função_de_campo, teria um ou mais jogadores da class Player.
Isto é o STL container mais eficiente uma vez que é do tipo associativo e a busca é O(1) --> Funciona por keys.

// Question 2 a)

vector<string> convertResultList(const vector<unsigned int>& number, const vector<string>& name, const vector<float>& grade) {

	vector<string> result;
	for (int i = 0; i < number.size(); i++) {

		string current_number = to_string(number[i]);
		string current_name = name[i];
		string current_grade = to_string(grade[i]);

		while (current_name.size() != "BBBBBBBBBBBBBBBBBBBB".size()) {
			current_name.size() = " " + current_name;
		}

		string compile = current_number + " | " + current_name + " | " + current_grade;
		result.push_back(compile);
	}

	return result;
}

// Question 2 b)

unsigned int countValues(const int a[], unsigned int nelem, int value)
{
	unsigned int i, count = 0;
	for (i = 0; i < nelem; i++)
		if (a[i] == value)
			count++;
	return count;
}

int mode(const int number[], unsigned int numElems) {
	
	int value = 0;
	int size = 0;
	for (int i = 0; i < numElems; i++) {
		int current_number = number[i];
		unsigned int attemp = countValues(number, numElems, current_number);
		if (attemp > size) {
			size = attemp;
			value = current_number;
		}
	}
	return value;
}

// Question 3

class Text {
	public:
		Text(string filename);
		// other methods
		bool existsWord(string word); // 'word' exists in the literary text? 
	private:
		string title; // title of the literary text
		string author; // author of the literary text
		vector<string> text; // contents of the literary text, line by line
};

// Question 3 a)

Text::Text(string filename) {

	ifstream file;
	file.open(filename);
	if (file.is_open()) {

		string title;
		string author;
		string current_line;
		getline(file, title); this->title = title;
		getline(file, author); this->author = author;

		while (!file.eof()) {
			getline(file, current_line);
			this->text.push_back(current_line);
		}

		file.close();
	}
	else {
		cerr << "File not found!" << endl;
		exit(1);
	}
}

// Question 3 b)

bool Text::existsWord(string word) {

	if (author.find(word) < author.size()) return true;
	if (title.find(word) < title.size()) return true;
	for (auto line : text) {
		if (line.find(word) < line.size()) return true
	}
	return false;
}

// Question 3 c)

int main() {

	string word, filename;
	cout << "Filename? "; cin >> filename;
	cout << "Word? "; cin >> word;

	Text t(filename);
	string answer = t.existsWord(word) ? "This word exists!" : "Not found";
	cout << answer << endl;

	return 0;
}

// Question 4

typedef struct {
	string clientBI, dateBegin, dateEnd;
} RentRecord;

// Question 4 a)

class Vehicle {

	public:
		Vehicle();
		Vehicle(string, string, string);
		void pushRecord(RentRecord);
		string getMatricula();
		string getMarca();
		string getModelo();
		
	private:
		vector<RentRecord> records;
		string matricula;
		string marca;
		string modelo;
};

class Client {

	public:
		Client();
		Client(unsigned int, string);
		string getName();
		unsigned int getBI();

	private:
		unsigned int BI;
		string name;
		
};

//Estrutura de dados adequada
vector<Vehicle> v;

// Question 4 b)

void showAvailableVehicles(Vehicle vei) {

	for (auto v : vei)
	{
		if (isAvailable(v)) {
			cout << v.getMatricula() << v.getMarca() << v.getModelo() << endl;
		}
	}

}