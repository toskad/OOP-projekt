#pragma once
#include <vector>
#include "Vypujcka.h"

//trida reprezentuje virtualni knihovnu ktera obsahuje knihy, zakazniky a lze si u ni pujcovat knihy

class Knihovna
{
private:
	string nazev;
	vector<Zakaznik*> zakaznici;
	vector<Kniha*> knihy;
	vector<Vypujcka*> vypujcky;
public:
	Knihovna(string nazev);
	void registraceZakaznika(string jmeno, string prijmeni);
	void pridaniKnihy(string nazev, Autor* autor, Zanr* zanr);
	void vypujceniKnihy(int idKnihy, int idZakaznika);
	void vypujceniKnihy(Kniha* kniha, Zakaznik* zakaznik);
	void vraceniKnihy(int idKnihy);
	Zakaznik* getZakaznikByID(int id);
	Kniha* getKnihaByID(int id);
	void vypisZakazniku();
	void vypisKnih();
	void vypisVypujcek();
	void vypisKnihByAutor(Autor* autor);
	void vypisKnihByZanr(Zanr* zanr);
	void vypisVypujcekByZakaznik(Zakaznik* zakaznik);
	bool isKnihaVypujcena(Kniha* kniha);
};

