#include "plik.h"
#include "handel.h"


handel :: handel() : Pracownicy() , pensja(0) , procent(0) , sprzedaz(0) {}


handel :: handel(std:: string name, std::string surname, std :: string nip, std :: string pesel ,double sale, double percent) :
Pracownicy ( name , surname , nip , pesel) , procent(percent) , sprzedaz(sale) {}


void handel :: wylicz_zarobki()
{
pensja = sprzedaz * procent*0.01;

}
void handel :: print() const
{

std :: cout << "Handel:"<<endl;
Pracownicy::print();
std :: cout << "Sprzedaz: "<< sprzedaz << endl;
std :: cout << "Procent: " << procent << endl;
std :: cout << "Pensja: " << pensja << endl<<endl;


}

handel :: ~handel() {}
