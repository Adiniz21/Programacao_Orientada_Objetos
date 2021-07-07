#include <iostream>

using std::cout;
using std::cin;

#include<string>
using std::string;
using std::getline;

#include<iomanip>
using std::setfill;
using std::setw;

#include "projeto9.h"

int main()
{
    data data1(11,02,2020);
    data data2;
    data1.imprimedata();
    data2.imprimedata();
    data2 = data1;
    data2.imprimedata();
    return 0;
}
