#pragma once
#include "Osoba.h"
#include <iostream>

using namespace std;

class Autor : public Osoba 
{
private:
	int pocetKnih;
public:
	Autor(string jmeno, string prijmeni, int pocetKnih);
};

