#include "Zanr.h"

Zanr::Zanr(string nazev)
{
	this->nazev = nazev;
	pocetObjektu++;
}

int Zanr::GetPocetObjektu()
{
	return pocetObjektu;
}

string Zanr::getNazev()
{
	return this->nazev;
}
