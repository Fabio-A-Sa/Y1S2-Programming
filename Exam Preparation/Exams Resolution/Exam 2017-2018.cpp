#include <iostream>
#include <cmath>
#include <array>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <map>
#include <algorithm>
#include <set>
#include <list>
using namespace std;

// Exam PROG 2017-2018 resolution
// Fábio Araújo de Sá

// Question 1 a)

void toUpperStr(string &s) {
	
	string result = "";
	for (int i = 0; i < s.size(); i++)
	{
		result += toupper(s[i]);
	}
	s = result;
}

// Questiono 1 b)

bool isLetter(char l) {
	vector<char> letters = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 
								'u', 'v', 'w', 'x', 'y', 'z'};
	for (auto c : letters)
		if (c == l) return true;
	return false;
}

string transformLine(string &s) {

	string all = "";
	for (auto letter : s) {
		if (isLetter(letter) || letter == ' ') {
			all += letter;
		}
		else {
			all += ' ';
		}
	}
	toUpperStr(all);
	return all;
}

// Question 1 c)

void decomposeLine(string& line, vector<string> words) {

	string result = transformLine(line);
	istringstream split(line);
	string current_word;
	while (split >> current_word) {
		words.push_back(current_word);
	}
}

// Question 1 d)

int another_main1()
{
	string in = "C:\\docs\\text.txt";
	string out = "words.txt";
	ifstream file;

	file.open(in);
	if (file.is_open()) {

		vector<string> all_words;
		string current_line;
		while (!file.eof()) {
			getline(file, current_line);
			decomposeLine(current_line, all_words);
		}

		file.close();
		sort(all_words.begin(), all_words.end());

		ofstream file;
		file.open(out);
		
		for (auto word : all_words) {
			file << word << endl;
		}

		file.close();
	}

	else {
		cerr << "File not found!" << endl;
		exit(1);
	}

	return 0;
}

// Question 1 f)

int another_main2()
{
	string in = "C:\\docs\\text.txt";
	string out = "words.txt";
	ifstream file;

	file.open(in);
	if (file.is_open()) {

		set<string> all_words;
		string current_line;
		while (!file.eof()) {
			getline(file, current_line);
			decomposeLine(current_line, all_words);
		}

		file.close();

		ofstream file;
		file.open(out);

		for (auto word : all_words) {
			file << word << endl;
		}

		file.close();
	}

	else {
		cerr << "File not found!" << endl;
		exit(1);
	}

	return 0;
}

// Question 2

struct Position {
	int lin, col;
};

class Ship {

	public:
		Ship(unsigned int identifier, char symbol, Position position, char direction, size_t size);
		unsigned int id() const; //returns identifier
		Position pos() const; //returns position
		char dir() const; //returns direction
		size_t size() const; //returns size
	private:
		unsigned int identifier; // ship id number
};

class Board {
	public:
		Board(size_t numLines = 10, size_t numColumns = 10);
		bool putShip(const Ship& s); //add ship to board, if possible
	private:
		bool canPutShip(Position pos, char dir, size_t size);
		size_t numLines, numColumns;
		vector<vector<int>> board; // each element = ship id or ‐1
		vector<Ship> ships;
};

// Question 2 a)

/*
	Board tem um construtor com default values, isto é, mesmo que não se indique o valor inicial de linhas e colunas (instrução Board b; ) contidas
	no objecto, ele admite por omissão valores nos parâmetros privados da classe pertencente.
	Ship não possui default values, resultando a instrução Ship s num erro de compilação.
*/

// Question 2 b)

Board::Board(size_t numLines, size_t numColumns) {

	this->numColumns = numColumns;
	this->numLines = numLines;

	size_t i, j;
	for (i = 0; i < this->numLines; i++) {
		for (j = 0; j < this->numColumns; j++) {
			board.at(i).at(j) = -1;
		}
	}
}

// Question 2 c)

bool Board::canPutShip(Position pos, char dir, size_t size) {

	bool answer = true;

	switch (dir)
	{
		case 'H':
			answer = answer && (pos.col + size < board[0].size());
			if (answer) {
				for (size_t i = 0; i < size; i++) {
					answer = answer && (board[pos.lin][pos.col + i] == -1);
				}
				return answer;
			}
			return false;
			break;

		case 'V':
			answer = answer && (pos.lin + size < board.size());
			if (answer) {
				for (size_t i = 0; i < size; i++) {
					answer = answer && (board[pos.lin + i][pos.col] == -1);
				}
				return answer;
			}
			return false;
			break;

		default:
			return false;
	}
}

// Question 2 d)

bool Board::putShip(const Ship& s) {

	bool isAvailable = canPutShip(s.pos(), s.dir(), s.size());

	if (isAvailable) {

		unsigned int id = s.id();
		char dir = s.dir();
		int x = s.pos().lin;
		int y = s.pos().col;
		size_t size = s.size();

		switch (dir)
		{
		case 'H':

			for (size_t i = 0; i < size; i++) {
				board[x][y + i] == -1;
			}

		case 'V':

			for (size_t i = 0; i < size; i++) {
				board[x + i][y] == -1;
			}

		default:
			return isAvailable;
		}

		return isAvailable;
	}

	return isAvailable;
}

// Question 2 e)

int another_main3()
{
	Board b = Board(10, 20);

	int id;
	Position xy;
	size_t tamanho;
	char symbol;
	char direction;

	cout << "ID? "; cin >> id;
	cout << "Position x? "; cin >> xy.lin;
	cout << "Position y? "; cin >> xy.col;
	cout << "Tamanho? "; cin >> tamanho;
	cout << "Symbol? "; cin >> symbol;
	cout << "Direction? "; cin >> direction;

	Ship p(id, symbol, xy, direction, tamanho);
	if (!b.canPutShip(xy, direction, tamanho)) {
		throw "Can't put ship!";
	}
	else {
		b.putShip(p);
	}

	return 0;
}

// Question 3 a1)

float average(const int grades[], int numStudents) {

	int result = 0;
	for (int i = 0; i < numStudents; i++) {
		result += grades[i];
	}
	return (float)result / numStudents;
}

// Question 3 a2)

void readGrades(int grades[], int numStudents);

float getResults() {

	int number;
	cout << "Number of students? "; cin >> number;
	int* notas = (int*)malloc(number * sizeof(float));
	readGrades(notas, number);
	return average(notas, number);
}

// Question 3 b)

template <class InputIterator, class T>

/*
	Como um STL vector é um container sequencial que permite ter apontadores/iteradores, então é viável a formação da referida função.
*/

InputIterator find(InputIterator first, InputIterator last, const T& val) {
	

	for (first; first != last; first++) {
		if (first == val) return first;
	}
	return last;
}

int another_main4() {

	string to_search = "31";
	vector<string> all;
	if (find(all.begin(), all.end(), to_search) != all.end()) {
		cout << "Found it!" << endl;
	}
	else {
		cout << "Not found!" << endl;
	}
	return 0;
}

// Question 3 c)

/*
	Um set é um tipo de SLT container associativo que pressupõe a existência de elementos não repetidos. No caso deste problema, 
	não é um bom container uma vez que poderá, numa primeira instância, haver posições repetidas.
	Uma possível solução seria um set de apontadores para objetos da classe Position
	set<Position*>
*/

// Question 3 d)

/*
	A saída do programa seria:
	2 3
	2
	2

	A saída do programa seria:
	2 3
	2
	2

	Daria erro de compilação. Ao substituir por private, a classe Derived já não teria acesso ao atributo "a", resultando num
	erro quando o tentava escrever na consola.
*/