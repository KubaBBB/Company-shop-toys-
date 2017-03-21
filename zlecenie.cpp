#include "zlecenie.h"



zlecenie :: zlecenie(): Pracownicy()  {pensja=0; godziny = 0 ;}

zlecenie :: zlecenie( string name, string surname, string nip, string pesel , double hours, double pension) : Pracownicy(name, surname, nip, pesel) , godziny(hours) , pensja(pension) {}


void zlecenie :: wylicz_zarobki()
{
if(godziny > 40)
	pensja = pensja * 1.5;

}

void zlecenie :: print() const
{
std :: cout << "Zlecenie:"<<endl;
Pracownicy::print();
std :: cout << "Godziny: "<< godziny << endl;
std :: cout << "Pensja: "<< pensja << endl;
std :: cout << endl;
}

zlecenie :: ~zlecenie() {}
