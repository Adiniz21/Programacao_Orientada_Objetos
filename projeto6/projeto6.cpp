

#include <iostream>

using std::cout;
using std::cin;

#include<string>
using std::string;
using std::getline;

#include<iomanip>
using std::setfill;
using std::setw;

#include "projeto6.h"


    hora::hora(int h, int m, int s)
    {
        settime(h,m,s);
    }

    void hora::settime(int h,int m,int s)
    {

        hr =  h;
        mi =  m;
        seg =   s;
    }

    void hora::horapadrao()
    {
        cout << "horario padrao: " << setfill('0') << setw(2) << hr << ":" << setfill('0') << setw(2) << mi << ":" << setfill('0') << setw(2) << seg << "\n";
    }

    void hora::horauniversal()
    {
        hr = (hr>=12 && hr<=23)?hr-12:hr;
        cout << "horario universal: " << setfill('0') << setw(2) << hr << ":" << setfill('0') << setw(2) << mi << ":" << setfill('0') << setw(2) << seg << "\n";
    }

    void hora::valida()
    {
        if(hr>=0 && hr<=11 && mi>=0 && mi<=59 && seg>=0 && seg<=59 )
            cout << "\nhorario valido";
        else

            cout << "\nhorario invalido";

    }


