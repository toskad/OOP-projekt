#include "Kniha.h"

Kniha::Kniha(string nazev, Autor* autor, Zanr* zanr, int id)
{
	this->autor = autor;
	this->id = id;
	this->nazev = nazev;
	this->zanr = zanr;
}

Autor* Kniha::getAutor()
{
	return this->autor;
}

Zanr* Kniha::getZanr()
{
	return this->zanr;
}

string Kniha::udaje()
{
	return (to_string(this->id) + " | " + this->nazev + " | " + this->autor->udaje());
}
