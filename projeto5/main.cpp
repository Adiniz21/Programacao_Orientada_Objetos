#include <iostream>

using std::cout;
using std::cin;

#include<string>
using std::string;
using std::getline;

#include<iomanip>
using std::setfill;
using std::setw;

class venda{
public:
    void setvenda(float v)
    {
        vendas = vendas + v;
    }

    float imprime()
    {
        return vendas;
    }

private:
    float vendas=0;
    };

int main()
{
   int i;
   float v;
   venda vend;
   for(i=1;i<13;i++)
   {
       cout << "Entre com a quantidade de vendas no mes " << i << ": ";
       cin >> v;
       vend.setvenda(v);
   }
   cout << "O total de vendas anual: $" << vend.imprime();
   return 0;
}
