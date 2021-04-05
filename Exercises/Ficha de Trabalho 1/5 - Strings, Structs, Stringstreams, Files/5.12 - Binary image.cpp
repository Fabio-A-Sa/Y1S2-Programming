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

    int counter;
    char current_letter;
    string compressed_content, part;
    string current_stack = "";
    current_stack += content[0];

    for (int index = 1 ; index < content.size() ; index ++ ) {

        current_letter = content[index];

        if ( current_stack[current_stack.size()-1] == current_letter ) {
            current_stack += current_letter;
        }
        else {
            counter = current_stack.size() ;
            part = current_letter == 'b' ? to_string(counter) + 'w' : to_string(counter) + 'b' ;
            compressed_content += part;
            current_stack = "";
            current_stack += current_letter;
        }
    }
    part = current_stack[current_stack.size()] == 'b' ? to_string(current_stack.size()) + 'w' : to_string(current_stack.size()) + 'b';
    compressed_content += part;

    cout << compressed_content << " " << compressed_content.size();

    return 0;
}