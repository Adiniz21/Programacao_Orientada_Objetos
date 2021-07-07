// aprendendo um pouco de classe
#include <iostream>

using std::cout;
using std::cin;

#include<string>
using std::string;
using std::getline;

#include "projeto2.h"

int main() {
  livro nota1("eng da computacao");
  livro nota2("medicina");
  cout << "Bem vindo ao bloco de notas: " << nota1.imprime1() << "\n";
  cout << "Bem vindo ao bloco de notas: " << nota2.imprime1() << "\n------------------";
  return 0;
}
