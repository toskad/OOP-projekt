#include "Zakaznik.h"

Zakaznik::Zakaznik(string jmeno, string prijmeni, int id) : Osoba(jmeno, prijmeni)
{
	this->id = id;
}

string Zakaznik::udaje()
{
	return (to_string(this->id) + " " + Osoba::udaje());
}
