// Created on May 20, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 20, pages 268 --> 286

#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

void count_many_words() {

    map <string, unsigned int> m;
    typedef map <string, unsigned int>::const_iterator MapIterator;
    string word;
    
    cout << "Write a text; end with <ENTER> followed by <CTRL-Z>\n";
    while(cin >> word) {
        m[word]++;
    }

    for (MapIterator i = m.begin(); i != m.end(); i++) {
        cout << i->first << ": "<< i->second << endl;
    }
}

int main ()
{   
    count_many_words();
    return 0;
}