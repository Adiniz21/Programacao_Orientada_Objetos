// aprendendo um pouco de classe
#include <iostream>

using std::cout;
using std::cin;

#include<string>
using std::string;
using std::getline;

#include "projeto3.h"

int main() {
  livro nota1("eng da computacao");
  livro nota2("medicina");
  livro nota3("Análise e Programação Orientada a Objetos");
  cout << "Bem vindo ao bloco de notas: " << nota1.imprime1() << "\n";
  cout << "Bem vindo ao bloco de notas: " << nota2.imprime1() << "\n";
  cout << "Bem vindo ao bloco de notas: " << nota3.imprime1() << "\n------------------";
  return 0;
}
