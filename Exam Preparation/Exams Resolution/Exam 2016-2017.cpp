#include <iostream>
#include <cmath>
#include <array>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <map>
#include <set>
#include <list>
using namespace std;

// Exam PROG 2016-2017 resolution
// Fábio Araújo de Sá

// Question 1 a)

void program() {
	
	string file_in = "people1.txt";
	string file_out = "people2.txt";
	ifstream fin;
	ofstream fout;
	fin.open(file_in);
	fout.open(file_out);

	if (fin.is_open()) {

		string current_line;
		string normalized_name;

		while (!fin.eof()) {

			getline(fin, current_line);
			simplify(current_line, normalized_name);
			fout << normalized_name << endl;
		}

		fin.close();
		fout.close();
	}

	else { 

		cerr << "people1.txt not found!" << endl; 
		exit(1); 
	}
}

// Question 1 b)

void simplify(const string& name, string& sName) {

	string answer, current_word;
	vector<string> words;
	istringstream s(name);
	while (s >> current_word) {
		words.push_back(current_word);
	}
	answer = words.size() > 1 ? words[0] + words[words.size() - 1] : words[0];
	sName = answer;
}

// Question 1 c)

void alphabetic() {

	string file_in = "people1.txt";
	string file_out = "people2.txt";
	ifstream fin;
	ofstream fout;
	fin.open(file_in);
	set<string> names;

	if (fin.is_open()) {

		string current_line;
		string normalized_name;

		while (!fin.eof()) {

			getline(fin, current_line);
			simplify(current_line, normalized_name);
			names.insert(normalized_name);
		}

		fin.close();

		fout.open(file_out);
		for (auto name : names) {
			fout << name << endl;
		}

		fout.close();
	}

	else {

		cerr << "people1.txt not found!" << endl;
		exit(1);
	}
}

// Question 2

class Date
{
	friend istream& operator>>(istream& f, Date& date);
	friend ostream& operator<<(ostream& f, const Date& date);
	friend bool operator<(const Date& left, const Date& right);
	friend bool operator==(const Date& left, const Date& right);
	public:
		Date(int y = 1, int m = 1, int d = 1);
		// ... other methods
	private:
		int y, m, d; // year, month, day
};

// Question 2 a)

Date::Date(int y, int m, int d) {
	this->y = y;
	this->m = m;
	this->d = d;
}

// Question 2 b)

bool operator<(const Date& left, const Date& right) {

	string one = to_string(left.y) + to_string(left.m) + to_string(left.y);
	string two = to_string(right.y) + to_string(right.m) + to_string(right.y);
	return stoi(one) < stoi(two);
}

// Question 2 c)

istream& operator>>(istream& f, Date& date) {

	int y, m, d;
	char barr;
	try {
		f >> y >> barr >> m >> barr >> d;
		throw runtime_error("invalid Date");
		date.d = d;
		date.y = y;
		date.d = m;
	}
	catch (runtime_error) {
		cerr << "invalid Date" << endl;
		exit(1);
	}

	return f;
}

// Question 2 d)

int main()
{
	int y, m, d;
	cout << "Date1 (yyyy:mm:dd)? "; cin >> y, m, d;
	Date d1(y, m, d);
	cout << "Date2 (yyyy:mm:dd)? "; cin >> y, m, d;
	Date d2(y, m, d);

	string one = d1.getDate();
	string two = d2.getDate();
	string result = " is ";
	if (d1 == d2) cout << one + result + " equal " + two;
	else if (d1 < d2) cout << one + result + " before " + two;
	else cout << one + result + " after " + two;
	return 0;
}

// Question 3

class Image {

	public:
		Image(size_t nLins = 0, size_t nCols = 0, int pixVal = 0, vector<vector<int>> img);
		void setPixel(size_t lin, size_t col, int pixVal); 
		bool read(string fileName); 
		Image getRegion(size_t lin, size_t col, size_t nLins, size_t nCols) const;
	private:
		vector < vector<int> > img;

};

// Question 3 a)

int Image::getPixel(int x, int y) const {

	return img.at(x).at(y);
}

// Question 3 b)

Image Image::getRegion(size_t lin, size_t col, size_t nLins, size_t nCols) {

	vector<vector<int>> all_content;
	vector<int> current_line;

	size_t i, j;
	for (i = lin; i < nLins; i++) {
		for (j = col; j < nCols; j++) {
			current_line.push_back(img.at(i).at(j));
		}
		all_content.push_back(current_line);
		current_line.clear();
	}

	Image final(nLins - lin, nCols - col, 0, all_content);
	return final;
}

// Question 3 c)

Usaria um multimap<Date, Image>, em que um object do tipo Date pode ser comum a um ou mais objectos da classe Image.
Um multimap é um STL container associativo, com pesquisa O(1) e portanto é computacionalmente mais viável do que qualquer
2D vector.

// Question 3 d)

int main()
{
	multimap<Date, Image> album;
	int y, m, d;
	string file;
	cout << "Date1 (yyyy:mm:dd)? "; cin >> y, m, d;
	Date d1(y, m, d);

	do {
		cout << "File? ";
		cin >> file;
		if (file.size()) {
			album[d1] = Image(file);
		}

	} while (file.size());

	return 0;
}

// Question 3 e)

template<class F>
class Image {

public:
	Image(size_t nLins = 0, size_t nCols = 0, F pixVal = 0, vector<vector<F>> img);
	void setPixel(size_t lin, size_t col, F pixVal);
	bool read(string fileName);
	Image getRegion(size_t lin, size_t col, size_t nLins, size_t nCols) const;
private:
	vector < vector<F> > img;

};

// Question 4 a)

void readNumber1(const string& msg, int& number) {
	cout << msg;
	cin >> number;
}

int number;
string msg = "Number ja: ";
readNumber1(msg, number);

int readNumber2(const string& msg) {
	int number;
	cout << msg;
	cin >> number;
	return number;
}

string msg = "Number ja: ";
int number = readNumber2(msg);

// Question 4 b)

Sim. O construtor do objecto já admite default values, pelo que é prescindível a utilização de novos valores na declaração
de um novo objecto.

// Question 4 c)

Usaria um pointer **p , usando dynamic memory allocation com o número de linhas e número de colunas já dados no enunciado.

// Question 4 d)

Image::Image() {

	// Alocação dinâmica de memória para um 2D int pointer chamado "img" --> Private atribute of Image Class
	int** img = (int**)malloc(nlines*sizeof(int));
	for (int i = 0; i < nlines; i++) {
		int* l = (int*)malloc(ncols * sizeof(int));
		img[i] = l;
	}
}	

// Question 4 e)

"list" é um SLT container sequencial, que permite inserção de novos elementos pela frente (push_front(item)) e por trás
(push_back(item)). Como tal, é necessário haver dois tipos de apontadores/iteradores, algo que o randomAcessIterator não
é capaz de proporcionar.

// Question 4 f)

A função draw() é declarada como virtual, está presente unicamente na Parent Class e é igualada a zero. Isto quer dizer que, num desenho genérico (vector de
objectos de tipo Shape, vector<Shape*>), quando se coloca a instrução item.draw(), o compilador, em tempo de execução, irá tratar de
invocar o método da classe derivada que manipula. As virtual functions servem essencialmente para declarar métodos a serem implementados,
de facto, só nas funções derivadas (Child Classes).