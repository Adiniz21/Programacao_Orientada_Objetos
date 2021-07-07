#include <iostream>

using std::cout;
using std::cin;

#include<string>
using std::string;
using std::getline;



#include "projeto3.h"

  livro::livro (string curso)
	{
	    altera(curso);
	}

	void livro::altera (string nome)
    {

       if(nome.length()<=25)
        curso1=nome;
        if(nome.length()>25)
        curso1=nome.substr(0, 25);
    }

    string livro::imprime1()
    {
        return curso1;
    }



//substr(0,25)
