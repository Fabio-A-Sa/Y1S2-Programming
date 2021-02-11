// Exercices from first collection, available on: 
// https://github.com/MIEIC-FEUP/Recursos/blob/master/1%C2%BA%20ano/2%C2%BA%20semestre/PROG%20-%20Programa%C3%A7%C3%A3o/Pr%C3%A1ticas/Folha%20%20de%20exerc%C3%ADcios%201.pdf

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

int main () // Split function with c++
{
    vector<string> words;
    string sentence, current_word;

    cout << "Input a sentence: ";
    getline(cin, sentence);
    sentence = sentence + " ";

    for (char letter : sentence) {
        if (letter != ' ') {
            current_word = current_word + letter;
        }
        else {
            words.push_back(current_word);
            current_word = "";
        }
    }
    for (string word : words) {
        cout << word << endl;
    }
    return 0;
}