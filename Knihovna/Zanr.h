#pragma once
#include <string>

using namespace std;

//trida reprezentuje zanr ktery pote vyuziva trida kniha

class Zanr
{
private:
	string nazev;
	static int pocetObjektu;
public:
	Zanr(string nazev);
	static int GetPocetObjektu();
	string getNazev();
};

