#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main ()
{

	ifstream in_file("maze.txt");
	if (!in_file.good()) {
		cout << "Error opening file \"maze.txt\".\n";
		main();
	}

    string aux;
	getline(in_file, aux);
	cout << aux << endl;

	int lines = stoi(aux.substr (0,2));
    int cols = stoi(aux.substr (aux.size()-2,2));

	cout << "Numbers: " << lines << " " << cols << endl;

	in_file.close();
	return 0;
}
