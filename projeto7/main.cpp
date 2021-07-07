#include <iostream>

using std::cout;
using std::cin;

#include<string>
using std::string;
using std::getline;

#include<iomanip>
using std::setfill;
using std::setw;

#include "projeto7.h"

criardestruir primeiro(1,"global antes da main");

void criar()
{
    criardestruir quinto(5,"local automatico em criar");
    criardestruir sexto(6,"local static em criar");
    criardestruir setimo(7,"local automatico em criar");
}


int main()
{
    cout << "\nFUNCAO MAIN: COMECA EXECUCAO \n\n";
    criardestruir segundo(2,"local automatico em main");
    criardestruir terceiro(3,"local static em main");
    cout << "\nFUNCAO CRIAR: COMECA EXECUCAO \n\n";

    criar();
    criardestruir quarto(4,"local automatico em main");
    return 0;
}
