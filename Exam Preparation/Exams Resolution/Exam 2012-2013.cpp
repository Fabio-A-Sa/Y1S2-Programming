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

O erro está na linha 6 do código. Uma possível solução:

int main()
{
	int n = 1, grade, sum = 0;
	float average;
	cout << "Grade " << n << "? "; cin >> grade;
	while (0 <= grade && grade <= 20)
	{
		sum = sum + grade;
		n++;
		cout << "Grade " << n << "? "; cin >> grade;
	};
	average = sum / n;
	cout << "Average = " << fixed << setprecision(1) << average << endl;
	return 0;
}

// Question 1 b)

A média deveria ser obtida através da instrução:
return (double)sum / (n - 1);

// Question 1 c)

Na linguagem de programação C++, a divisão de dois inteiros resulta num inteiro. Assim, a melhor solução seria:
return (double)sum / (n - 1);

// Question 1 d)

Uma possível solução para resolver o problema.A cada iteração, usar as instruções
cin.clear();
cin.ignore(10000, '\n');

// Question 2 a)

O vector não é passado por referência mas sim por valor, resultando que este é alterado só no scopo da função swap() e não
globalmente. O header da função seria, de forma ideal, o seguinte:
bool swapElems(vector<int>& v, int i, int j);

// Question 2 b)

bool swapElems(int v[], int i, int j);
if (i >= 0 && j < sizeof(v) / sizeof(v[0])));

// Question 2 c)

template<typename T>
bool swapElems(vector<T>& v, int T, int T);

// Question 3 a)

class Time {

	public:
		Time();
		Time(int hour, int minute, int second);
		void show() const;

	private:
		int minute;
		int second;
		int hour;
};

// Question 3 b)

Time::Time() {
	this->minute = 0;
	this->second = 0;
	this->hour = 0;
}

Time::Time(int hour, int minute, int second) {
	this->minute = minute;
	this->second = second;
	this->hour = hour;
}

void Time::show() const {
	cout << hour << ":" << minute << ":" << second << endl;
}

// Question 3 c)

É necessário fazer "overload" do operador "<<" colocando-o, por exemplo, como "friend" da classe Time e implementando-o da seguinte forma:

ostream & operator<< (ostream& os, const Time &t) {
	os << hour << ":" << minute << ":" << second << endl;
	return os;
}

// Question 3 d)

Como terei de indexar dois tipos de dados (string e objecto Time), algumas que até podem ser repetidas, usaria o STL container associativo multimap.
Implementaria da seguinte forma:

#include <map>
multimap<string, Time> act;

// Question 4 a)

bool fileOpen(string fileName, ifstream &file) {
	file.open(fileName);
	return file.good();
}

// Question 4 b)

bool getBets(string filename, vector<vector<int> >& vec)
{
	int contador = 1; bool erro;
	ifstream f;
	stringstream ss;
	string line;
	vector<int> aposta;
	if (!fileopen(filename, f))
		return false;
	while (!f.eof()) {
		getline(f, line);
		if (!line.size()) break;
		stringstream ss(line);
		aposta.clear();
		while (!ss.eof()) {
			int n; ss >> n;
			if (n > 0) aposta.push_back(n);
		}
		if (aposta.size() != 7) {
			cout << "Erro na aposta " << contador++ << endl;
			erro = false;
		}
		else
			vec.push_back(aposta);
	}
	f.close();
	return erro;
}

// Question 4 c)

void printBet(const vector<int>& aposta)
{
	int index = 0;
	for (unsigned int i = 1; i < 46; i++) {
		if (index < 5 && aposta[index] == i) {
			cout << setw(2) << i << " ";
			index++;
		}
		else cout << " "; if ((i % 9) == 0)
			cout << endl;
	}
	cout << endl << endl;
	for (unsigned int i = 1; i < 10; i++)
		if (aposta[index] == i) {
			cout << setw(2) << i << " "; index++;
		}
		else cout << " ";
	cout << endl;

}

// Question 4 d)

void score(const vector<int>& aposta, const vector<int>& chave) {

	unsigned int certas = 0;
	for (unsigned int i = 0; i < 5; i++)
		for (unsigned int j = 0; j < 5; j++) {
			cout << aposta[i] << " " << chave[j] << endl; if(aposta[i] == chave[j])
			certas++;
	else if (aposta[i] < chave[j])
		break;
			}
	cout << certas << " + ";

	certas = 0;
	for (unsigned int i = 5; i < 7; i++)
		if (aposta[i] == chave[5] || aposta[i] == chave[6])
			certas++;
	cout << certas << endl;

}

// Question 5

class Peca {

	public:
		Peca(); // constrói uma "peça vazia"
		Peca(string nome, bool cor);
		string getNome() const; // retorna o nome de Peca
		bool getCor() const; // retorna a cor de Peca
		void setPeca(string nome, bool cor); // atualiza os atributos de Peca
	private:
		string nome; // o nome da peça pode ser: “Rei”, “Rainha”, “Torre”, “Bispo”, “Cavalo”, ou “Peao”
		// a ausência de uma peça é assinalada usando a string vazia no nome
		bool cor; // true para as peças brancas; false para as peças pretas
};

class Tabuleiro {

	public:
		Tabuleiro(); // reserva espaço para um tabuleiro (matriz 8 x 8) e preenche
		// todas as posições com uma "peça vazia" (ver texto acima)
		string getPecaNaPos(string pos) const; //retorna nome da peça na pos. dada
		vector<Peca> torrePodeTomar(unsigned int lin, unsigned int col,
		bool (cor) const; // retorna os nomes das
		// peças que podem ser tomadas pela torre cuja posição e cor é dada
		void pecasTomadas() const; //mostra nome das peças tomadas por cada jogador
	private:
		vector< vector<Peca> > tabuleiro; // tabuleiro de jogo
		set<string> pretasTomadas; // peças pretas tomadas pelas brancas
		set<string> brancasTomadas; // peças brancas tomadas pelas pretas
}; //nota pós-exame: deviam ser multisets; são sets, apenas para simplificar

// Question 5 a)

#define DIMENSAO 8

Tabuleiro::Tabuleiro() {
	for (unsigned int i = 0; i < DIMENSAO; i++) {
		vector<Peca> linha;
		for (unsigned int j = 0; j < DIMENSAO; j++)
			linha.push_back(Peca());
		tabuleiro.push_back(linha);
	}
}

// Question 5 b)

string Tabuleiro::getPecaNaPos(string pos) const {
	int linha, coluna;
	linha = DIMENSAO - (pos[1] –'0');
	coluna = pos[0] – 'A';
	return tabuleiro[linha][coluna].getNome();

}

// Question 5 c)

vector<Peca> Tabuleiro::torrePodeTomar(unsigned int lin, unsigned int col, bool cor) const {
	vector<Peca> tomadas;
	// verificar na coluna para cima
	for (int l = lin - 1; l >= 0; l--)
		if (tabuleiro[l][col].getNome() != "") {
			if (tabuleiro[l][col].getCor() != cor) {
				tomadas.push_back(tabuleiro[l][col]);
				break;
			}
			else break;
		}
	// verificar na coluna para baixo
	for (int l = lin + 1; l < DIMENSAO; l++)
		if (tabuleiro[l][col].getNome() != "") {
			if (tabuleiro[l][col].getCor() != cor) {
				tomadas.push_back(tabuleiro[l][col]);
				break;
			}
			else break;
		}
	// verificar na linha para a esquerda
	for (int c = col - 1; c >= 0; c--)
		if (tabuleiro[lin][c].getNome() != "") {
			if (tabuleiro[lin][c].getCor() != cor) {
				tomadas.push_back(tabuleiro[lin][c]);
				break;
			}
			else break;
		}
	// verificar na linha para a direita
	for (int c = col + 1; c < DIMENSAO; c++)
		if (tabuleiro[lin][c].getNome() != "") {
			if (tabuleiro[lin][c].getCor() != cor) {
				tomadas.push_back(tabuleiro[lin][c]);
				break;
			}
			else break;
		}
	return tomadas;
}

// Question 5 d)

void Tabuleiro::pecasTomadas() const {
	set<string>::iterator it;
	cout << "Tomadas pelas pretas: ";
	for (it = brancasTomadas.begin(); it != brancasTomadas.end(); it++)
		cout << *it << " "; cout << endl;
	cout << "Tomadas pelas brancas: ";
	for (it = pretasTomadas.begin(); it != pretasTomadas.end(); it++)
		cout << *it << " ";
	cout << endl;
}