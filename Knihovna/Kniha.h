#pragma once
#include "Autor.h"
#include "Zanr.h"

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

