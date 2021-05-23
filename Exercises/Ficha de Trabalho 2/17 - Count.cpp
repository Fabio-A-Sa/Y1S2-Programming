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
        else {
            std::cout << " ";
        }
        i++;
    }
    std::cout << std::endl;
}

bool myfuncs::endl(const std::string &s) {
    return islower(s[s.size()-1]);
}

int main ()
{
    std::string test = "Th78392is0is5627a7t892es0t3tof5Main0Fun82737c2837tio327N";
    myfuncs::cout(test);
    std::string answer = myfuncs::endl(test) ? "Lower case" : "Upper case";
    std::cout << answer << std::endl;
    return 0;
}