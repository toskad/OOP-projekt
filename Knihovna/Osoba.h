#pragma once
#include <string>
#include <iostream>

using namespace std;

class Osoba
{
protected:
	string jmeno;
	string prijmeni;
public:
	Osoba(string jmeno, string prijmeni);
	string udaje();
};

