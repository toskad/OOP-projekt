#pragma once
#include <string>

using namespace std;

//trida reprezentuje zanr ktery pote vyuziva trida kniha

class Zanr
{
private:
	string nazev;
public:
	Zanr(string nazev);
	string getNazev();
};

