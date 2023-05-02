#pragma once
#include <string>
#include <iostream>

using namespace std;

//abstraktni trida reprezentuje osobu ktera ma jmeno a prijmeni
 
class Osoba
{
protected:
	string jmeno;
	string prijmeni;
public:
	Osoba(string jmeno, string prijmeni);
	virtual string udaje() = 0;
};

