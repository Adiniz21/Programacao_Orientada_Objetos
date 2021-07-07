
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
        hora(int h);
        void imprime();
        int &sethora(int);
    private:
        int hor;

};
