#include <iostream>

using std::cout;
using std::cin;

#include<string>
using std::string;
using std::getline;

#include<iomanip>
using std::setfill;
using std::setw;

#include "projeto8.h"

int main()
{

    hora h(20);
    int &horaref = h.sethora(30);
    h.imprime();
    horaref=30;
    h.imprime();
    h.sethora(12)=74;
    h.imprime();
    return 0;
}
