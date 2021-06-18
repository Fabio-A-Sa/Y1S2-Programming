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
using namespace std;

// Exam PROG 2011-2012 resolution
// Fábio Araújo de Sá

// Question 1 a)

A melhor solução seria:
bool hasDuplicates(const vector<int>& v) {
		
	for (size_t i = 0; i < v.size(); i++) {
		for (size_t j = i + 1; j < v.size(); j++) {
			if (v[i] == v[j]) {
				return true;
			}
		}
	}
	return false;
}

// Question 1 c)

typedef unsigned long IdentNum;
class Book {

	public:
		Book();
		Book(string bookName);
		void setName(string bookName);
		IdentNum getId() const;
		string getName() const;
		void show() const;
	private:
		static IdentNum nextBookID; // identificador do próximo livro a inserir na biblioteca
		IdentNum id; // identificador do livro
		string name; // nome do livro
};

IdentNum Book::nextBookID = 1;

Book::Book() {

	this->name = "UNKNOWN";
	nextBookID++;
	this->id = nextBookID;
}

class Library
{	
	friend class Book;
	public:
		Library();
		void addBook(Book book);
		void showBooks() const;
	private:
		vector<Book> books; // os livros existentes na biblioteca
};

// Question 2 a)

vector<int> lePedido() {
	
	vector<int> pedidos;
	int next;
	do {
		cout << "Pedido? 0 para parar: ";
		cin >> next;
		if (next) pedidos.push_back(next);

	} while (next);
}

// Question 2 b)

void open(string filename, string pedido) {
	
	ifstream file;
	file.open(filename);
	if (file.good()) {

		vector<string> lines;
		string current_line;
		while (!file.eof()) {
			getline(file, current_line);
			lines.push_back(current_line);
		}
		file.close();
		lines.push_back(pedido);

		ofstream file;
		file.open(filename);
		for (auto line : lines) {
			file << line << endl;
		}

		file.close();
	}
	else { cout << "File not found!"; exit(1); }
}

// Question 2 c)

string pedido(int n, vector<int> pizzas, int preco) {
	string answer = to_string(n) + " - ";
	for (auto x : pizzas) {
		answer += " " + to_string(x);
	}
	answer += " = " + to_string(preco);
	return answer;
}

bool repetidos(string number) {

	for (int i = 0; i < number.size()-1 ; i++) {
		for (int j = i + 1; j < number.size(); j++) {
			if (number[i] == number[j]) {
				return true;
			}
		}
	}
	return false;
}

int calculaPagamento(vector<int> pizzas) {

	int total = 0;
	for (auto pizza : pizzas) {
		int incremento = repetidos(to_string(pizza)) ? 10 : 12;
		total += incremento;
	}
	return total;
}

// Question 3

map<char, string> suitNames;

class Card {

	friend bool operator<(const Card& card1, const Card& card2); //compara tendo em conta o rank
	public:
		Card();
		Card(char suit, unsigned int rank);
		char getSuit() const; // retorna o naipe da carta
		unsigned int getRank() const; // retorna o valor da carta
		void setSuit(string suitName); // altera o naipe da carta
	private:
		char suit; // o naipe da carta: 'C' - copas, 'E' - espadas, 'O' - ouros, 'P' - paus
		unsigned int rank; // o valor da carta: 1 - ás, 2 - duque, ..., 11 - valete, 12 - dama, 13 - rei
};

class Hand {

	public:
		Hand();
		void addCardInOrder(Card c); // acrescenta uma carta à mão
		Card getCard(); // retira uma carta da mão
		bool evenNumberOfFiguresAndAces() const; // retorna true se o n.o de "figuras + ases" for par
	private:
		vector<Card> cards; // o conteúdo da mão
};

// Question 3 a)

void Card::setSuit(string suitName) {

	this->suit = toupper(suitName[0]);
}

// Question 3 b)

void Hand::addCardInOrder(Card c) {
		
	cards.push_back(c);
	sort(cards.begin(), cards.end(), [](Card c) -> unsigned int { return c.getRank(); });
}

// Question 3 c)

bool Hand::evenNumberOfFiguresAndAces() const {

	vector<int> keys = { 1, 2, 11, 12, 13 };
	int counter = 0;
	for (auto card : cards) {
		for (auto key : keys) {
			if (card.getRank() == key) {
				counter++;
			}
		}
	}
	return (counter+1) % 2;
}

// Question 3 d)

void preencher(map<char, string> &suitNames) {
		
	vector<char> c1 = { 'C', 'E', 'O', 'P' };
	vector<string> c2 = { "copas", "espadas", "ouros", "paus" };
	for (int i = 0; i < 4; i++) {
		pair<char, string> p(c1[i], c2[i]);
		suitNames.insert(p);
	}
}

// Question 4

typedef unsigned int Numero;

class ApostaSimples {

	public:
		ApostaSimples(vector<Numero> numeros, Numero estrela1, Numero estrela2);
	private:
		unsigned int numeros[5];
		unsigned int estrelas[2];
};

class ApostaDeEuroMilhoes {

	public:
		ApostaDeEuroMilhoes(vector<vector<char> > numerosAp, vector<vector<char> > estrelasAp);
		vector<ApostaSimples> converteApostaMultipla();
	private:
		vector<Numero> numeros; // os números da aposta
		vector<Numero> estrelas; // as estrelas da aposta
		unsigned int numNumeros; // número de números
		unsigned int numEstrelas; // número de estrelas
		bool apostaMultipla; // true se a aposta for múltipla
};

// Question 4 a)

ApostaDeEuroMilhoes::ApostaDeEuroMilhoes(vector<vector<char>>numerosAp, vector<vector<char>> estrelasAp) {

	this->numNumeros = numeros.size();
	this->numEstrelas = estrelas.size();

	for (auto n : numeros) {
		int x = n % 6;
		int y = n % 9;
		if (numerosAp[x][y] != 'X') { numerosAp[x][y] = 'X'; }
		else this->apostaMultipla = true;
	}

	for (int i = 0; i < numerosAp.size(); i++) {
		for (int j = 0; j < numerosAp.size(); j++) {
			if (numerosAp[i][j] != 'X') {
				numerosAp[i][j] = ' ';
			}
		}
	}
}