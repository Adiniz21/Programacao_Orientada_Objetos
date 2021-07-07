
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

hora::hora(int h)
{
    sethora(h);
}

int &hora::sethora(int h)
{
    hor=h;
    return hor;
}

void hora::imprime()
{
    if(hor>=0 && hor<=24)
        cout << "Hora valida:" << hor << "\n";
    else
        cout << "hora invalida:" << hor << "\n";
}
