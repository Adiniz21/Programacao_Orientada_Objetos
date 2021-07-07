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

criardestruir::criardestruir(int numero, string mensagemd)
{
    id = numero;
    mensagem = mensagemd;
    cout << "Objeto " << id <<  " criado " <<  mensagem << "\n";
}

criardestruir::~criardestruir()
{
    cout << "Objeto " << id << " destruido " << mensagem << "\n";

}
