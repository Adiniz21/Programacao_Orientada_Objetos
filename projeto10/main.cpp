#include <iostream>

using std::cout;
using std::cin;

#include<string>
using std::string;
using std::getline;

#include<iomanip>
using std::setfill;
using std::setw;

class hora{
public:

    hora(int h,int m,int s)
    {
        settime(h,m,s);
    }


    void settime(int h,int m,int s)
    {

        hr =  h;
        mi =  m;
        seg =   s;
    }

    void horapadrao() const
    {
        cout << "horario padrao: " << setfill('0') << setw(2) << hr << ":" << setfill('0') << setw(2) << mi << ":" << setfill('0') << setw(2) << seg << "\n";
    }

    void horauniversal()
    {
        hr = (hr>=12 && hr<=23)?hr-12:hr;
        cout << "horario universal: " << setfill('0') << setw(2) << hr << ":" << setfill('0') << setw(2) << mi << ":" << setfill('0') << setw(2) << seg << "\n";
    }

    void valida()
    {
        if(hr>=0 && hr<=11 && mi>=0 && mi<=59 && seg>=0 && seg<=59 )
            cout << "\nhorario valido";
        else
            cout << "\nhorario invalido";

    }

private:
    int hr;
    int mi;
    int seg;
    };

int main()
{
    hora h(21,30,5);
    const hora hi(10,5,3);
    cout << "Horario padrao: 24:00:00 \n";
    cout << "Horario universal: 00:00:00 \n\n";
    h.horapadrao();
    h.horauniversal();
    h.valida();
    hi.horapadrao();
    cout << "\n\n-----------------------------------------------";
    return 0;
}
