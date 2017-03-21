
#include<iostream>
#include<fstream>
#include<cstring>



#ifndef han
#define han

#include"plik.h"

using namespace std;

class handel: public Pracownicy
{
private:
	double pensja;
	double procent;
	double sprzedaz;

public:

	handel();
	handel(string, string, string, string, double, double);
	virtual void wylicz_zarobki();
	virtual void print() const ;
	virtual ~handel();

};
#endif
