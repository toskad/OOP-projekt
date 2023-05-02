#include <iostream>
#include "Knihovna.h"

int Zanr::pocetObjektu;

int main()
{
    Knihovna k("testovaci knihovna");
    Autor* a1 = new Autor("Karel", "Capek", 20);
    Autor* a2 = new Autor("Jan", "Werich", 15);
    Zanr* z1 = new Zanr("sci-fi");
    Zanr* z2 = new Zanr("komedie");

    cout << "pocet vytvorenych zanru: " << Zanr::GetPocetObjektu() << endl;
    cout << endl;

    k.registraceZakaznika("Jan", "Novak");
    k.registraceZakaznika("Petr", "Zelenka");

    k.pridaniKnihy("valka s mloky", a1, z1);
    k.pridaniKnihy("RUR", a1, z1);
    k.pridaniKnihy("Vest pocket revue", a2, z2);

    k.vypujceniKnihy(0, 1);
    cout << endl;
    k.vypujceniKnihy(k.getKnihaByID(1), k.getZakaznikByID(1));
    cout << endl;
    k.vraceniKnihy(1);
    cout << endl;

    k.vypisZakazniku();
    cout << endl;
    k.vypisKnih();
    cout << endl;
    k.vypisVypujcek();
    cout << endl;
    k.vypisKnihByAutor(a1);
    cout << endl;
    k.vypisKnihByZanr(z2);
    cout << endl;
    k.vypisVypujcekByZakaznik(k.getZakaznikByID(1));
    cout << endl;

    if (k.isKnihaVypujcena(k.getKnihaByID(0))) {
        cout << "kniha: " << k.getKnihaByID(0)->udaje() << " -> je vypujcena" << endl;
    }
    else {
        cout << "kniha: " << k.getKnihaByID(0)->udaje() << " -> neni vypujcena" << endl;
    }

    if (k.isKnihaVypujcena(k.getKnihaByID(1))) {
        cout << "kniha: " << k.getKnihaByID(1)->udaje() << " -> je vypujcena" << endl;
    }
    else {
        cout << "kniha: " << k.getKnihaByID(1)->udaje() << " -> neni vypujcena" << endl;
    }

}