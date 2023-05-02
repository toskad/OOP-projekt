#pragma once
#include "Osoba.h"
class Zakaznik : public Osoba
{
private:
	int id;
public:
	Zakaznik(string jmeno, string prijmeni, int id);
	string udaje();
};

