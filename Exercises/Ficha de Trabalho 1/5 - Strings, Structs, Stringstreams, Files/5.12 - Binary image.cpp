// Created on April, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

int main ()
{   
    string content;
    ifstream file;
    file.open("Files\\binary_image_uncompressed");
    getline(file, content);
    file.close();

    cout << content << endl;
    return 0;
}