#pragma once
#include "Osoba.h"

//trida reprezentuje zakaznika ktery dedi z tridy osoba a doplnuje ho o id

class Zakaznik : public Osoba
{
private:
	int id;
public:
	Zakaznik(string jmeno, string prijmeni, int id);
	string udaje();
};

