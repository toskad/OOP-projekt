#include "Autor.h"

Autor::Autor(string jmeno, string prijmeni, int pocetKnih) : Osoba(jmeno, prijmeni)
{
	this->pocetKnih = pocetKnih;
}

string Autor::udaje()
{
	return (this->jmeno + " " + this->prijmeni);
}

