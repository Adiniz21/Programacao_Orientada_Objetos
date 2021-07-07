
#include <iostream>

using std::cout;
using std::cin;

#include<string>
using std::string;
using std::getline;

#include<iomanip>
using std::setfill;
using std::setw;

class hora
{
public:
    hora(int=0,int=0,int=0);
    void settime(int ,int ,int );
    void horapadrao();
     void horauniversal();
     void valida();
private:
    int hr;
    int mi;
    int seg;
};
