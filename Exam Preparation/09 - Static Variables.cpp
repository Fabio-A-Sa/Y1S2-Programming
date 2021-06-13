// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 64 of Lectures Material

#include <iostream>
using namespace std;

int getTicketNumber() {

    static int ticketNum = 0; // initialized only once, at program startup
    ticketNum++;
    return ticketNum;
}

int main()
{
    int i;
    for (i=1; i <= 10; i++)
    cout << "ticket number = " << getTicketNumber() << endl;
    return 0;
}