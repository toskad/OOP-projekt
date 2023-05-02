#include "Osoba.h"

Osoba::Osoba(string jmeno, string prijmeni)
{
	this->jmeno = jmeno;
	this->prijmeni = prijmeni;
}

string Osoba::udaje()
{
	return (this->jmeno + " " + this->prijmeni);
}
