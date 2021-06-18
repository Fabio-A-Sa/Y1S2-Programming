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

// Exam PROG 2015-2016 resolution
// Fábio Araújo de Sá

// Question 1

class Purse
{
	friend bool operator==(Purse, Purse);
	public:
		Purse(); // cria um porta moedas vazio sem dono especificado
		Purse(string owner); // cria um porta moedas vazio cujo dono é "owner"
		void addCoin(float coin); // acrescenta a moeda indicada como parâmetro
		void addCoins(vector<float> coins); // acrescenta as moedas indicadas como parâmetro
		bool removeCoin(float coin); //se existir uma moeda com o valor indicado como parâmetro remove‐a e retorna true, se não retorna false
		... removeAmount(...) ...; // VER DESCRIÇÃO NA ALÍNEA a)
		float tellAmount() const; // retorna o montante total
		vector<float> tellCoins() const; // retorna uma cópia do vetor das moedas
		void show() const; // mostra o dono, as moedas e o montante total
		// ... outros métodos
		static vector<float> possibleCoins; // moedas possíveis: 2, 1, 0.5, 0.2 e 0.1 euro
	private:
		string owner; // o dono do porta‐moedas
		vector<float> coins; // as moedas
		float amount; // o montante total (soma do valor das moedas)
};

// Question 1 a)

Um exemplo de resposta possível:
bool Purse::removeAmount(vector<int> &coins, float amount);

// Questão 1 b)

vector<float> Purse::possibleCoins = { 2, 1, 0.5F, 0.2F, 0.1F };
Neste contexto, o qualificativo static significa que só existe uma instância de possibleCoins para todos os objetos
da classe Purse

// Question 1 c)

Purse::Purse(string owner) {
	this->owner = owner;
	this->amount = 0;
	this->coins.clear();
}

// Question 1 d)

void Purse::addCoins(vector<float> coins) {

	for (auto coin : coins) {
		this->coins.push_back(coin);
		this->amount += coin;
	}
}

// Question 1 e)

bool Purse::removeCoins(float coin) {

	vector<float>::iterator p = find(coins.begin(), coins.end(), coin);
	if (p != coins.end()) {
		coins.erase(p);
		amount -= coin;
		return true;
	}
	return false;
}

// Question 1 f)

bool operator== (Purse one, Purse two) {
	bool answer = one.amount == two.amount;
	sort(one.coins.begin(), one.coins.end());
	sort(two.coins.begin(), two.coins.end());
	for (int i = 0; i < coins.size(); i++) {
		answer = answer && (one.coins[i] == two.coins[i]);
	}
	return answer;
}

// Question 1 g)

int main()
{
	srand((unsigned int)time(NULL)); // não "obrigatório"
	Purse purse1("Ana");
	vector<float> coins1 = { 2, 1, 0.5F, 0.5F, 0.2F, 0.2F, 0.1F };
	purse1.addCoins(coins1);
	purse1.show();
	Purse purse2;
	for (unsigned int i = 1; i <= coins1.size(); i++)
	{
		float coin = Purse::possibleCoins.at(rand() % Purse::possibleCoins.size());
		purse2.addCoin(coin);
	}
	purse2.show();
	if (purse1 == purse2)
		cout << "Porta‐moedas iguais\n":
	else
		cout << "Porta‐moedas diferentes\n";
}

// Question 1 h)

map<float, unsigned int>;

// Question 2 a)

class Board
{
public:
	Board(size_t numLines, size_t numColumns, char emptySymbol);
	size_t getNumLines() const;
	size_t getNumColumns() const;
	char getPieceAt(size_t line, size_t column) const;
	string getLineAt(size_t line) const;
	string getColumnAt(size_t column) const;
	bool setPieceAt(size_t line, size_t col, char piece);
	void show() const;
private:
	vector<string> board; // OU vector<vector<char>> board;
	char emptySymbol;
	size_t numLines;
	size_t numColumns;
};

// Question 2 b)

Board::Board(size_t numLines, size_t numColumns, char emptySymbol) {

	string line(numColumns, emptySymbol);
	for (int i = 0; i < numLines; i++) {
		board.push_back(line);
	}
}

// Question 2 c)

string Board::getColumn(size_t column) const // NOTA: para o utilizador, a 1a coluna é a coluna 1
{
	string colStr;
	for (size_t i = 0; i < numLines; i++)
		colStr = colStr + board.at(i).at(column ‐ 1); // OU ... board[i][column ‐ 1];
	return colStr;
}

// Question 2 d)

bool testSequence(const Board& b, size_t column, char symbol, size_t n)
{
	string colStr = b.getColumnAt(column);
	string pattern = string(n, symbol);
	if (colStr.find(pattern) == string::npos)
		return false;
	return true;
}

// Question 3 a)

Será mostrado 1 - 2

// Question 3 b)

class Point {
	public:
		Point();
		Point(int x, int y);
		Point* setX(int x);
		Point* setY(int y);
	private:
		int x;
		int y;
};

// Question 3 c)

template<class T, class V>
class Point {
public:
	Point();
	Point(T x, V y);
	Point* setX(T x);
	Point* setY(V y);
private:
	T x;
	V y;
};

// Question 3 d)

template <class BidirectionalIterator>
void reverse(BidirectionalIterator first, BidirectionalIterator last);

É possível, uma vez que o STL vector é um container sequencial que permite ter iteradores. A chamada seria definida como:
reverse(v.begin(), v.end());

// Question 3 e)

É possível, embora seja impossível, estaticamente, determinar a que classe derivada pertence cada objecto do vector.
É o chamado "slicing problem" e pode ser resolvido usando apontadores (pointers) de cada tipo de classe child