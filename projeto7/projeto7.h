#include <iostream>

using std::cout;
using std::cin;

#include<string>
using std::string;
using std::getline;

#include<iomanip>
using std::setfill;
using std::setw;

class criardestruir
{
    public:
    criardestruir(int numero, string mensagemd);
    ~criardestruir();

    private:
        int id;
        string mensagem;
};
