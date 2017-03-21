
#include<iostream>
#include<fstream>
#include<cstring>



#ifndef zle
#define zle

#include"plik.h"
using namespace std;

class zlecenie: public Pracownicy
{
private:
	double godziny;
	double pensja;

public:
	zlecenie();
	zlecenie ( string, string, string, string, double,double);
	virtual void wylicz_zarobki();
	virtual void print() const;
	virtual ~zlecenie();
};
#endif
