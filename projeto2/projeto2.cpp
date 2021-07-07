#include <iostream>

using std::cout;
using std::cin;

#include<string>
using std::string;
using std::getline;

#include "projeto2.h"

  livro::livro (string curso)
	{
	    altera(curso);
	}

	void livro::altera (string nome)
    {
      curso1=nome;
    }

    string livro::imprime1()
    {
        return curso1;
    }



