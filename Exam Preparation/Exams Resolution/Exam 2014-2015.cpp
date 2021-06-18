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

// Exam PROG 2014-2015 resolution
// Fábio Araújo de Sá

// Question 1 a)

void get_code_sum(const string& code_grades, int num_grades, string& code, double& sum) {
	
	double partial = 0.0;
	double next;
	istringstream split(code_grades);
	split >> code;
	while (split >> next) {
		partial += next;
	}
	sum = partial;
}

// Question 1 b)

int main()
{
	string file, intro_file_name = ".txt", out_file_name = "_final.txt";
	int num_grades;
	cout << "File Name? ";
	cin >> file; intro_file_name = file + intro_file_name; out_file_name = file + out_file_name;

	ifstream fin;
	fin.open(intro_file_name);
	if (fin.is_open()) {

		ofstream fout;
		fout.open(out_file_name);
		string current_line;

		fin >> num_grades;
		while (!fin.eof()) {
			
			double sum = 0.0;
			string code;
			getline(fin, current_line);
			get_code_sum(current_line, num_grades, code, sum);
			fout << code << " - " << sum << endl;
		}

		fin.close();
		fout.close();

	}
	else {
		cerr << "File not found!" << endl; exit(1);
	}

	return 0;
}

// Question 2

class Student {

	public:
		Student();
		Student(const string& code, const string& name);
		void setGrades(double shortExam, double project, double exam);
		string getCode() const;
		string getName() const;
		int getFinalGrade() const;
		// other get and set methods
		bool isApproved() const; // is the student approved or not ?
		static int weightShortExam, weightProject, weightExam; // weights in percentage (ex:20,30,50)
	private:
		string code; // student code
		string name; // student complete name
		double shortExam, project, exam; // grades obtained by the student in the different components
		int finalGrade;
};

// Question 2 --> Similar ao que fiz nos exercícios passados

// Question 3 a)

double average(int* p, const unsigned int n) {

	// Dinamicamente:
	p = (int*)malloc(n * sizeof(int));

	// Estaticamente:
	const int number = 10;
	int p2[number];
}

// Question 3 b)

Por exemplo, fazendo um try-throw-catch em cada inserção, para garantir a conveniência das operãções

// Question 3 c)

Quando, em tempo de execução, se usa alocação dinâmica de memória (malloc(), new), para libertar o espaço momentaneamente 
ocupado na Heap Memory, suporte essencial do objecto da classe em questão.

// Question 3 d)

Para que o cout (ostream &) receba essa mesma referência, por memória, de modo a conseguir obter o valor
pretendido sem criar cópias desnecessárias

// Question 3 e)

template <class RandomAccessIterator>
void sort(RandomAccessIterator first, RandomAccessIterator last);

bool operator< (Student t1, Student t2) {
	return t1.getName() < t2.getName();
}

Student one, two;
sort(one, two, [](Student b, Student c) -> (bool x) { return b < c; });

// Question 3 f)

usaria o multimap:
multimap<string name, Shap p>, com name = nome do desenho e p qualquer objecto derivado de Shape