#include "Knihovna.h"

Knihovna::Knihovna(string nazev)
{
	this->nazev = nazev;
}

void Knihovna::registraceZakaznika(string jmeno, string prijmeni)
{
	Zakaznik *z = new Zakaznik(jmeno, prijmeni, zakaznici.size());
	zakaznici.push_back(z);
}

void Knihovna::pridaniKnihy(string nazev, Autor* autor, Zanr* zanr)
{
	Kniha* k = new Kniha(nazev, autor, zanr, knihy.size());
	knihy.push_back(k);
}

void Knihovna::vypujceniKnihy(int idKnihy, int idZakaznika)
{
	Vypujcka* v = new Vypujcka(this->getKnihaByID(idKnihy), this->getZakaznikByID(idZakaznika));
	this->vypujcky.push_back(v);
}

void Knihovna::vypujceniKnihy(Kniha* kniha, Zakaznik* zakaznik)
{
	Vypujcka* v = new Vypujcka(kniha, zakaznik);
	this->vypujcky.push_back(v);
}

void Knihovna::vraceniKnihy(int idKnihy)
{
	for (Vypujcka* v : this->vypujcky) {
		if (v->getKniha() == this->getKnihaByID(idKnihy)) {
			this->vypujcky.erase(find(this->vypujcky.begin(), this->vypujcky.end(), v));
		}
	}
}

Zakaznik* Knihovna::getZakaznikByID(int id)
{
	return this->zakaznici.at(id);
}

Kniha* Knihovna::getKnihaByID(int id)
{
	return this->knihy.at(id);
}

void Knihovna::vypisZakazniku()
{	
	cout << "Seznam zakazniku:" << endl;
	for (Zakaznik* z : this->zakaznici) {
		cout << z->udaje() << endl;
	}
}

void Knihovna::vypisKnih()
{
	cout << "Seznam knih:" << endl;
	for (Kniha* k : this->knihy) {
		cout << k->udaje() << endl;
	}
}

void Knihovna::vypisVypujcek()
{
	cout << "Seznam vypujcek:" << endl;
	for (Vypujcka* v: this->vypujcky) {
		cout << v->getKniha()->udaje() << " -> " << v->getZakaznik()->udaje() << endl;
	}
}

void Knihovna::vypisKnihByAutor(Autor* autor) {
	cout << "Seznam knih (" << autor->udaje() << "):" << endl;
	for (Kniha* k : this->knihy) {
		if (k->getAutor() == autor) {
			cout << k->udaje() << endl;
		}
	}
}

void Knihovna::vypisKnihByZanr(Zanr* zanr)
{
	cout << "Seznam knih (" << zanr->getNazev() << "):" << endl;
	for (Kniha* k : this->knihy) {
		if (k->getZanr() == zanr) {
			cout << k->udaje() << endl;
		}
	}
}

void Knihovna::vypisVypujcekByZakaznik(Zakaznik* zakaznik) 
{
	cout << "Seznam vypujcek (" << zakaznik->udaje() << "):" << endl;
	for (Vypujcka* v : this->vypujcky) {
		if (v->getZakaznik() == zakaznik) {
			cout << v->getKniha()->udaje() << endl;
		}
	}
}

bool Knihovna::isKnihaVypujcena(Kniha* kniha) {
	for (Vypujcka* v : this->vypujcky) {
		if (v->getKniha() == kniha) {
			return true;
		}
	}
	return false;
}