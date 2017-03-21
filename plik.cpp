

#include"plik.h"
#include <iomanip>
using namespace std;



Pracownicy :: Pracownicy()
{
imie = "pusto";
nazwisko = "pusto";
NIP = "0";
PESEL = "0";

}

Pracownicy :: Pracownicy( string name , string surname , string nip , string pesel)
{
imie = name;
nazwisko = surname;
NIP = nip;
PESEL = pesel;

}


void Pracownicy :: print() const
{

using namespace std;
cout << setw(10) << "Imie: " << imie << endl;
cout << setw(10) << "nazwisko: " << nazwisko << endl;
cout << setw(10) << "NIP: " << NIP << endl;
cout << setw(10) << "PESEL: " << PESEL << endl;


}


Pracownicy :: ~Pracownicy() {}
