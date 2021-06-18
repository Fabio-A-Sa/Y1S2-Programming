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

// Exam PROG 2011-2012 resolution
// Fábio Araújo de Sá

// Question 1 a)

O parâmetro é passado por referência, o que não se justifica uma vez que a função não irá modificá-lo.
Uma possível solução:

unsigned int countZeros(vector<int>& v) {
	
	unsigned int numZeros = 0;
	for (size_t i = 0; i < v.size(); i++)
		if (v[i] == 0) numZeros++;
	return numZeros;
}

// Question 1 b)

string cardRankToSymbol(unsigned int rank) {

	string names[] = { " A"," 2"," 3"," 4"," 5"," 6"," 7"," 8"," 9","10"," J"," Q"," K" };
	return names[rank - 1];

	map<char, string> p;
	for (auto name : names) {
		pair<char, string> current(name, 0);
		p.insert(current);
	}
}

// Question 1 c)

template<class F>
F absolute(F number) {
	
	if (number > 0) {
		return number;
	}
	else {
		return (T)-number;
	}
}

// Question 1 d)

class String {

	friend std::ostream& operator<<(std::ostream& out, const String& right);
	friend bool operator==(const String& left, const String& right);
	friend String operator+(const String& left, const String& right);

	public:
		String();
		String(const char s[]);
		String(const String& right);
		~String();
		String& operator=(const String& right);
		char& operator[](int index);
		char operator[](int index) const;
		int length() const;

	private:
		char* buffer;
		int len;
};

O qualificativo "friend" serve para vincular uma função externa à classe, isto é, que não pertence aos atributos privados e públicos da mesma,
mas que pode ter acesso aos atributos privados do objecto a manipular.
Trata-se essencialmente para facilitismo e flexibilidade na implementação do código.
O destruidor implementou-se pois existe métodos que tratam da alocação dinâmica de memória e, como tal, necessitam que a memória seja desocupada
logo depois da sua utilização (libertação da Heap Memory).

// Question 2 a)

string open() {

	ifstream file;
	string fileName;
	cout << "File name? ";
	cin >> fileName;

	file.open(fileName);

	if (file.good()) {
		
		file.close();
		cout << "Open Successfuly! " << endl;
		return fileName;
	}
	else { cout << "File not exist!" << endl; exit(1); }
}

// Question 2 b)

vector<string> getDict() {

	string fileName = open();
	ifstream file;
	string current_word;
	vector<string> dictionary;

	file.open(fileName);
	while (!file.eof()) {
		getline(file, current_word);
		dictionary.push_back(current_word);
	}
	file.close();

	return dictionary;
}

// Qustion 2 c)

bool match(string pattern, string attemp) {

	if (pattern.size() != attemp.size()) return false;
	else {

		bool answer = true;

		for (int i = 0; i < pattern.size(); i++) {
			if (pattern[i] != '.') {
				answer = answer && pattern[i] == attemp[i];

		return answer;
	}
}

// Question 3

class Card {

	friend ostream& operator<<(ostream& os, const Card& card);

	public:
		Card();
		Card(char suit, unsigned int rank, unsigned int points, bool isFaceUp);
		char getSuit() const; // retorna o naipe
		unsigned int getRank() const; // retorna o valor
		unsigned int getPoints() const; // retorna a pontuação da carta

	private:
		char suit; // o naipe da carta: 'C' - copas, 'E' - espadas, 'O' - ouros, 'P' - paus
		unsigned int rank; // o valor da carta: 1 - ás, 2 - duque, ..., 11 - valete, 12 - dama, 13 - rei
		unsigned int points; // a pontuação da carta: ás - 11, duque - 2, ..., valete/dama/rei - 10
		bool isFaceUp; // true = face virada para cima
};

class Hand {

	public:
		Hand();
		void addCard(Card c); // acrescenta uma carta à mão
		Card getCard(); // retira uma carta da mão
		void show() const; // mostra as cartas da mão, no estado em que cada uma estiver
		unsigned int getPointsTotal() const; // obtém a pontuação total das cartas da mão
	private:
		vector<Card> cards; // o conteúdo da mão
};

// Question 3 a)

Card::Card(char suit, unsigned int rank, unsigned int points, bool isFaceUp) {

	this->suit = suit;
	this->rank = rank;
	this->points = points;
	this->isFaceUp = isFaceUp;
}

// Question 3 b)

ostream& operator<<(ostream& os, const Card& card) {

	if (card->isFacedUp) {
		os << card->rank << "." << card->suit << endl;
	}
	else {
		os << "XXXX" << endl;
	}

	return os;
}

// Question 3 c)

int Hand::getPointsTotal() {

	int points = 0;
	bool as = false;
	for (auto card : cards) {
		points += card->rank;
		if (card->rank == 1) as = true;
	}
	if (points > 21 && as) return points - 10;
	return points;
}

// Question 3 d)

void Hand::show() {
	
	for (auto c : cards) {
		cout << c; // O operador está implementado
	}
}

// Question 4 

class Coin
{
	public:
		Coin(int v, char u);
		void showDescription() const; //mostra descrição da moeda (ex: 1E para um euro ou 2C para 2 cêntimos)
		double getValue() const; //NOTAR o double: retorna o valor da moeda em euros (ex: 0.01 para 1 cênt.)
	private:
		int value;
		char unit; // 'E' para 'euro' ou 'C' para 'cêntimo'
};

// Question 4 a)

#ifndef PURSE_H
#define PURSE_H

Coin::Coin(int v, char u) {

	this->value = v;
	this->unit = u;
}

void Coin::showDescription() const {
	
	cout << value << toupper(unit) << endl;
}

double Coin::getValue() const {
		
	if (unit == 'C') return (double) value / 100.0;
	return (double) value;
}

#endif 