#pragma once
#include "Osoba.h"
#include <iostream>

using namespace std;

//trida reprezentuje autora ktery dedi z tridy osoba a doplnuje ho o pocet knih autora

class Autor : public Osoba 
{
private:
	int pocetKnih;
public:
	Autor(string jmeno, string prijmeni, int pocetKnih);
	string udaje();
};

