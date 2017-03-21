#include<iostream>
#include<fstream>
#include<cstring>




#ifndef pra
#define pra

using namespace std;

class Pracownicy
{
private:
	string imie, nazwisko, NIP, PESEL;

public:
	Pracownicy();
	Pracownicy(string, string, string, string);
	virtual void print()const;
	virtual void wylicz_zarobki() = 0;
	virtual ~Pracownicy();


};


#endif



