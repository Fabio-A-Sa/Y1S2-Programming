// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>

namespace myfuncs {
    void cout(const std::string &s);
    bool endl(const std::string &s);
}

void myfuncs::cout(const std::string &s) {
    int i = 0;
    while (s[i]) {
        if (isalpha(s[i])) {
            std::cout << s[i];
        }
        i++;
    }
}

bool myfuncs::endl(const std::string &s) {
    return islower(s[s.size()-1]);
}

int main ()
{
    std::string test = "This0isa7test0stofMainFunctioN";
    myfuncs::cout(test);
    std::string answer = 
    return 0;
}