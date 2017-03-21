#include "stala.h"
#include "plik.h"

stala_praca :: stala_praca():Pracownicy(), pensja(0) {}





stala_praca :: stala_praca(string name, string surname, string nip, string pesel , double pen) : Pracownicy(name,surname,nip,pesel) , pensja(pen) {}


void stala_praca :: wylicz_zarobki()
{


}

void stala_praca :: print() const
{
std :: cout << "Stala praca:"<<endl;
Pracownicy::print();
std :: cout << "Pensja: "<< pensja << endl;
std :: cout<<endl;

}

stala_praca :: ~stala_praca() {}
