#include <iostream>

using std::cout;
using std::cin;

#include<string>
using std::string;
using std::getline;

#include<iomanip>
using std::setfill;
using std::setw;

class data
{
public:
    data(int=0 ,int=0 , int=0 );
    void setdata(int d,int m, int a);
    void imprimedata();
private:
    int dia, mes, ano;
};
