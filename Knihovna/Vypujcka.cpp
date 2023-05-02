#include "Vypujcka.h"

Vypujcka::Vypujcka(Kniha* kniha, Zakaznik* zakaznik)
{
	this->kniha = kniha;
	this->zakaznik = zakaznik;
}

Kniha* Vypujcka::getKniha()
{
	return this->kniha;
}

Zakaznik* Vypujcka::getZakaznik()
{
	return this->zakaznik;
}
