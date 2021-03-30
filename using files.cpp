#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main ()
{
	ifstream in_file("maze.txt");
	if (!in_file.good()) {
		cout << "Error opening file \"maze.txt\".\n";
		exit(-1);
	}

    string aux;
    cout << "\x1B[2J\x1B";
	while (!in_file.eof())
	{
		getline(in_file, aux);
		cout << aux << endl;
	}
	in_file.close();
	return 0;
}
