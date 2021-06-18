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

while (value >= lim1 && value <= lim2);

// Question 1 b)

temperatura[10..50] ?
o
0

// Question 1 c)

/*
	Enquanto o buffer não receber um valor que garanta a insersão de uma variável do tipo int em "value"
	então deve-se apagar a flag de erro do buffer (usando cin.clear) e o conteúdo do mesmo (cin.ignore())
*/

// Question 1 d)

vector<string> code;
vector<unsigned int> grade;

int current_grade;
for (auto c : code) {
	cout << "Classificacao de " << code << " [0..20] ? ";
	cin >> current_grade;
	grade.push_back(current_grade);
}

// Question 1 e)

vector<map<int, string>> all, ou seja, um vector contendo maps de int e string;
para obter cada dado faríamos:
for (auto m : all) {
	cout << m->first << " " << m->second << endl;
}

// Question 1 f)

Dá erro uma vez que a função poderia só retornar double.
Poderia fazer overloading escolhendo este processo com uma template function:

template<class T>
T getValue (const std::string &msg, T number1, T number2)


// Question 1 g)

É o mais acertado a se fazer, uma vez que map e multimap são STL containers do tipo associativo e de busca/manipulação log linar (O(1)).
Assim, o que poderia fazer era:

#include <map> , para importar map e multimap
map<string, int> all_grades, onde:
	this -> string = name --> Nome do estudante
	this -> int grade --> Nota do estudante

// Question 2

class Point {

	friend double dist(const Point& p1, const Point& p2); //calcula a distância entre p1 e p2
	public:
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
		Polygon& addVertex(Point p); // acrescenta vértice ao polígono
		Polygon& addVertex(Point p, size_t pos); // acrescenta vértice na posição pos
		size_t getSize() const; // devolve no de lados do polígono = no de vértices
		Point getVertex(size_t pos) const; // devolve vértice na posição pos
		double mystery() const; // ver alínea c)
		// outros métodos da classe Polygon
	private:
		list<Point> v; // vértices do polígono
};

// Question 2 a)

Point::Point(double x, double y) {

	this->x = x;
	this->y = y;
}

// Question 2 b)

Não é possível mesmo que, de seguida, se faça p(double x, double y) para caracterizar o objecto da classe. 
Isto porque não existe um default constructor da classe, por exemplo, um Point(), como acontece na classe Polygon.

// Questioon 2 c)

O código mystery retorna um double com a soma das distâncias de dois ponto consecutivos, ou seja, o perímetro 
do objecto da classe polígono.

// Question 2 d)

A função retorna o ponto (objecto Point) que está na posição pos do vector privado da classe Poligon
Point getVertex(size_t pos) {
	return v[pos];
}

// Question 2 e)

É desadequada.Uma lista(list) é um STL container sequencial e, como tal, tem algoritmo de busca O(n)-- > log linear, o que implica
um esforço computacional desadequado.Além disso, como é preenchido com objectos Point e não apontadores(*) para esses mesmos objectos,
acaba por criar cópias deles na memória, alocando mais bytes do que era necessário à função desempenhada.
Assim, nem a inserção nem a busca se torna viável neste tipo de container.Em vez disso, usar map<Point*> poderia ser mais correcto.

// Question 2 f)

O código não está sintaticamente correcto pois o método público da classe Polygon addVertex(Point p) não retorna um apontador para o
objecto polygon. Assim, escrever numa só instrução a inserção de três pontos torna-se inviável. Em vez disso, a alternativa seria:

Polygon p;
p.addVertex(p1);
p.addVertex(p2);
p.addVertex(p3);

// Question 3

class Biblioteca {

	private:
		string nomeBiblioteca; // guarda o nome da biblioteca
		vector<Livro> livros; // guarda os livros existentes na biblioteca
	public:
		vector<unsigned int> histograma() const; // devolve um histograma - ver alínea c)
};

class Livro {

	private:
		string titulo; // título do livro
		string autor; // autor do livro
		vector<string> texto; // linhas de texto que constituem o livro
	public:
		Livro(string nomeFicheiro);
		unsigned int numeroPalavras() const;
};

// Question 3 a)

Livro::Livro(string nomeFicheiro) {

	ifstream file;
	file.open(nomeFicheiro);
	if (file.good()) {

		string current_line;
		getline(file, current_line);
		titulo = current_line;
		getline(file, current_line);
		autor = current_line;

		while (!file.eof()) {
			getline(file, current_line);
			texto.push_back(current_line);
		}
	}
	else { cout << "File not found!" << endl; }
	file.close();
}

// Question 3 b)

unsigned int Livro::numeroPalavras() const {
		
	unsigned int answer = 0;
	for (auto line : texto) {
		
		string current_word;
		istringstream l(line);
		while (l >> current_word) {
			answer++;
		}
	}
		
	return answer + texto.size();
}

// Question 3 c)

vector<unsigned int> Biblioteca::histograma() const {
		
	vector<unsigned int> histo(10);
	for (auto livro : livros) {
		int words = livro.numeroPalavras();
		histo[(words + 1) % 100]++;
	}
	return histo;
}

// Question 4 a)

string geraMutacoes(string DNA, int number) {
	
	vector<char> letters;
	for (auto c : DNA) {
		letters.push_back(c);
	}

	vector<char> mut = { 'A', 'C', 'G', 'T' };
	while (number) {
		int index = rand() % DNA.size();
		int let_index = rand() % 4;
		while (mut[let_index] == letters[index])
			let_index = rand() % 4;

		letters[index] == mut[let_index];
	}

	string answer = "";
	for (auto l : letters) { answer = + l; }

	return answer;
}

// Question 4 b)

vector<int> listaMutacoes(string n1, string n2) {
			
	vector<int> result;
	for (int i = 0; i < n1.size(); i++) {
		for (int j = 0; j < n2.size(); j++) {
			if (i == j && n1[i] != n2[j]) {
				result.push_back(i);
			}
		}
	}
	return result;
}

// Question 4 c)

int sum(vector<int> v) {
	
	int result = 0;
	for (auto n : v) { result += n; }
	return result;
}

vector<vector<int>> matrizDeDistâncias(vector<string> &seq) {

	vector<vector<int>> all;
	vector<int> current_line;
	
	for (int i = 0; i < seq.size(); i++) {
		for (int j = 0; j < seq.size(); j++) {
			int result = sum(listaMutacoes(seq[i], seq[j]));
			current_line.push_back(result);
		}
		all.push_back(current_line);
		current_line.clear();
	}
	return all;
}