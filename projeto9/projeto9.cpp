
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

data::data(int d,int m, int a)
{
    setdata(d,m,a);
}
void data::setdata(int d, int m, int a)
{
    dia=d;
    mes=m;
    ano=a;
}
void data::imprimedata()
{
    cout << "A data inserida foi:" << dia << ":" << mes << ":" << ano << "\n";
}
