#include <iostream>
#include <cstring>
#include "plik.h"
#include "zlecenie.h"
#include "handel.h"
#include "stala.h"
#include <vector>
int main(void)
{

handel no1("Jakub","Boliglowa","1111111","2222222",20000,5.0);
stala_praca no2("Jakub","Boliglowa","1111111","2222222",4000);
zlecenie no3("Jakub","Boliglowa","1111111","2222222",41,2000);

Pracownicy *pracownicy[3];

pracownicy[0]=&no1;
pracownicy[1]=&no2;
pracownicy[2]=&no3;
for(int i=0; i<3;i++)
	{
	pracownicy[i]->wylicz_zarobki();
	}

std :: vector < Pracownicy *> example;
example.push_back(&no1);
example.push_back(&no2);
example.push_back(&no3);

for ( int i = 0 ; i < example.size() ; i++)
	example[i]->print();

return 1;
}
