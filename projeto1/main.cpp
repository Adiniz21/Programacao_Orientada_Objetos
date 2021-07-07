// aprendendo um pouco de classe
#include <iostream>

using std::cout;
using std::cin;

#include<string>
using std::string;
using std::getline;

class livro{   //criação da classe
	public:          //deixa a função publica

	void saudacoes()
	{
	    cout << "Coloque o nome do curso: ";
	}
		void altera (string nome)
    {
      curso1=nome;
    }

    string recebe ()
		{
			return curso1;
		}

    private: //essa parte so a classe consegue acessar
    string curso1;
   };

int main() {

  livro nota; //direcionando o objeto a classe
  string curso;
  nota.saudacoes();
  getline(cin,curso);
  nota.altera(curso);
  cout << "\n\nBem vindo ao bloco de notas do curso: " << nota.recebe() << "\n--------------------";
  return 0;
}
