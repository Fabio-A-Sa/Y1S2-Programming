#include <iostream>
#include <cmath>
#include <array>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <map>
using namespace std;

// Exam PROG 2019-2020 resolution
// Fábio Araújo de Sá

/*
	Question 1
	
	False --> "private" is a reserved word of C++ programming language
	False --> (*p).x or p->x are two correct options to get a x atribute of pointer p
	False --> if (x <= 10 && x >= 0) is the correct syntax
	True
	True
	True
	False --> "PROG" isn't a constant string
	True
	False --> Person is a class and Queue<Person> is a linear/sequence container of Person's objects
	True
	True
	False --> cin.clear() erases the buffer error flag while cin.ignore(1000, '\n') erases the buffer content
	False --> This is a .h definition (header file definition) of a class, not a caller of constructor
	True
	True
	False --> Sets are formed by unique values in linear ascending order
	True
	True
	False --> Methods of Parent Class A are private to Child Class B
	True
*/

// Question 2 a)

vector<int> genRandom (int n, int m) {

	vector<int> result;
	while (result.size() != n) {
		int random_number = rand() % (m + 1);
		result.push_back(random_number);
	}
	return result;
}

// Question 2 b)

int vectorReduce (vector<int> v1, vector<int> &v2) {

	int counter = 0;
	
	for (int i = 0 ; i < v1.size() ; i++ ) {
		for (int j = 0; j < v2.size(); j++ ) {
			if (v1[i] == v2[j]) {
				counter++;
				v2.erase(v2.begin() + j);
			}
		}
	}
	return counter;
}

// Question 2 c)

void showVector(const vector<int>& v) {

	for (int n : v) {
		cout << setw(3) << n;
	}
	cout << endl;
}

int main()
{
	int n, m, counter;
	cout << "n? "; cin >> n;
	cout << "m? "; cin >> m;
	vector<int> v1 = genRandom(n, m);
	vector<int> v2 = genRandom(n, m);
	counter = vectorReduce(v1, v2);
	showVector(v1);
	showVector(v2);
	cout << counter << " elements were removed from 2nd vector" << endl;
	return 0;
}

// Question 2 d)

int* genRandom2(int n, int m) {

	int* p = (int*) malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		p[i] = rand() % (m + 1);
	}
	return p;
}

// Question 3

class Game {
	public:
		Game(const string& filename);
		int neighborMines(int line, int col) const;
	private:
		vector<vector<char>> mines;
};

// Question 3 a)

Game::Game(const string& filename) {

	ifstream file;
	file.open(filename);

	if (file.good()) {

		string current_line;
		char trash;
		int lines, cols;
		getline(file, current_line);
		istringstream s(current_line);
		s >> lines >> trash >> cols;
		
		mines.resize(lines, vector<char>(cols, ' '));

		int x, y;
		while (!file.eof()) {
			getline(file, current_line);
			istringstream n(current_line);
			n >> x >> trash >> y;
			mines.at(x).at(y) = 'M';
		}
	}
	else { cout << "File not exists!" << endl; }
}

// Question 3 b)

int Game::neighborMines(int line, int col) const {
	
	int counter = 0;
	if (mines[line][col] == 'M') { throw runtime_error("Boom") ; }
	else {

		if (line - 1 < 0 || col - 1 < 0 || line + 1 > mines.size() || col + 1 > mines[0].size()) {

			if (mines[line++][col++] == 'M') counter++;
		}
		else {
			if (mines[line++][col] == 'M') counter++;
			if (mines[line][col++] == 'M') counter++;
			if (mines[line++][col--] == 'M') counter++;
			if (mines[line--][col++] == 'M') counter++;
			if (mines[line++][col++] == 'M') counter++;
			if (mines[line--][col--] == 'M') counter++;
			if (mines[line--][col++] == 'M') counter++;
			if (mines[line--][col] == 'M') counter++;
		}
	}
	return counter;
}

// Question 4

class Student {
	public:
		Student(int id = 0, const string& name = "");
		int getId() const;
		string getName() const;
		void enrollCourse(Course* course);
		bool setGrade(int courseId, int grade);
		int getAverageGrade();

	private:
		int id;
		string name;
		vector<Course*> courses;
		map<int, int> grades;
} ;

class Course {

	public:
		Course(int id = 0, const string& name = "");
		int getId() const;
		string getName() const;

	private:
		int id;
		string name;
};

// Question 4 a)

Student::Student(int i, const string& name) {

	this->id = id;
	this->name = name;
}

// Question 4 b)

void Student::enrollCourse(Course* course) {

	courses.push_back(course);
}

// Question 4 c)

bool Student::setGrade(int courseId, int grade) {

	bool answer = false;
	for (auto course : courses) {

		if (course->getId() == courseId) {
			!answer;
			break;
		}
		if (grades.find(courseId) != grades.end()) {
			!answer;
			break;
		}
	}
	if (!answer) {
		grades[courseId] = grade;
	}
	return answer;
}

// Question 4 d)

int id = 1;
string name = "PROG";
Course *c = new Course(id, name);
int id2 = 12345;
string name2 = "Ada";
Student *t = new Student(id2, name2);
t->enrollCourse(c);
t->setGrade(1, 20);

// Question 5 a)

int Student::getAverageGrade() {

	int result = 0;
	for (auto course : courses) {
		result += grades[course->getId()];
	}
	return (int) (result / courses.size() + 0.5);
}

// Question 5 b)

/*
	Usar um tipo de container STL vector para este tipo de dados não é o mais correcto.
	Além de alocar automaticamente a memória, como é um container do tipo linear, com busca O(n) e sequenciável, torna
	a busca / inserção de novas notas computacionalmente mais complexa.
*/

// Question 5 c)

/*
	Escolheria um map, STL container associativo, do tipo map<Course, map<Year, Grade>, que a cada parâmetro associava:
	this-> Course , o curso frequentado
	this-> Year, o ano de frequência
	this-> Grade, a frequência obtida
	A busca/manipulação dos dados seria O(1), log constante, e computacionalmente mais viável.
*/