#include <iostream>

using std::cout;
using std::cin;

#include<string>
using std::string;
using std::getline;




class livro{  //criação da classe
  public:
    livro (string curso);

    void altera (string nome);

    string imprime1();

    private: //essa parte so a classe consegue acessar
    string curso1;

};
