// Created on April, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

int main ()
{   
    string content, current_line;
    int lines = 0; int cols = 0;
    ifstream file;

    file.open("Files\\binary_image_uncompressed.txt");
    while (!file.eof()) {
        getline(file, current_line);
        cols = current_line.size();
        lines ++;
        content += current_line;
    }
    file.close();

    cout << cols << " " << lines << " " << content << endl;

    return 0;
}