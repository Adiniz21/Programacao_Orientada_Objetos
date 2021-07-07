#include <iostream>

using std::cout;
using std::cin;

#include<string>
using std::string;
using std::getline;

#include<iomanip>
using std::setfill;
using std::setw;

#include "projeto6.h"


int main()
{
    hora ho;
    hora ho1(11);
    hora ho2(4,24);
    hora ho3(20,34,54);
    hora ho4(25,67,89);
    cout << "Horario padrao: 24:00:00 \n";
    cout << "Horario universal: 00:00:00 \n\n";
    ho.horapadrao();
    ho.horauniversal();
    ho.valida();
    cout << "\n\n-----------------------------------------------\n";
    ho1.horapadrao();
    ho1.horauniversal();
    ho1.valida();
    cout << "\n\n-----------------------------------------------\n";
    ho2.horapadrao();
    ho2.horauniversal();
    ho2.valida();
    cout << "\n\n-----------------------------------------------\n";
    ho3.horapadrao();
    ho3.horauniversal();
    ho3.valida();
    cout << "\n\n-----------------------------------------------\n";
    ho4.horapadrao();
    ho4.horauniversal();
    ho4.valida();
    cout << "\n\n-----------------------------------------------\n";
    return 0;
}
