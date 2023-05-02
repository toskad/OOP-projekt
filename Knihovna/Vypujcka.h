#pragma once
#include "Kniha.h"
#include "Zakaznik.h"

class Vypujcka
{
private:
	Kniha* kniha;
	Zakaznik* zakaznik;
public:
	Vypujcka(Kniha* kniha, Zakaznik* zakaznik);
	Kniha* getKniha();
	Zakaznik* getZakaznik();
};

