#pragma once
#include "Autor.h"
#include "Zanr.h"

//trida reprezentuje knihu ktera obsahuje nazev, autora, id a zanr

class Kniha
{
private:
	string nazev;
	Autor* autor;
	int id;
	Zanr* zanr;
public:
	Kniha(string nazev, Autor* autor, Zanr* zanr, int id);
	Autor* getAutor();
	Zanr* getZanr();
	string udaje();
};

