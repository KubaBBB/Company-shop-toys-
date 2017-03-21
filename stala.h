

#include<iostream>
#include<fstream>
#include<cstring>
#include "plik.h"


#ifndef stala
#define stala

using namespace std;

class stala_praca: public Pracownicy
{
private:
	double pensja;
public:
	stala_praca();
	stala_praca(string , string , string, string ,double);
	virtual void wylicz_zarobki();
	virtual void print() const;
	virtual ~stala_praca();
};
#endif
