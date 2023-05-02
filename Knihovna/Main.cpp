#include <iostream>
#include "Knihovna.h"

int main()
{
    Knihovna k("testovaci knihovna");
    Autor a1("Karel", "Capek", 20);
    Autor a2("Jan", "Werich", 15);
    Zanr z1("sci-fi");
    Zanr z2("komedie");

    k.registraceZakaznika("Jan", "Novak");
    k.registraceZakaznika("Petr", "Zelenka");

    k.pridaniKnihy("valka s mloky", &a1, &z1);
    k.pridaniKnihy("RUR", &a1, &z1);
    k.pridaniKnihy("Vest pocket revue", &a2, &z2);

    k.vypujceniKnihy(0, 1);
    k.vypujceniKnihy(1, 1);
    k.vraceniKnihy(1);

    k.vypisZakazniku();
    cout << endl;
    k.vypisKnih();
    cout << endl;
    k.vypisVypujcek();
    cout << endl;
    k.vypisKnihByAutor(&a1);
    cout << endl;
    k.vypisKnihByZanr(&z2);
    cout << endl;
    k.vypisVypujcekByZakaznik(k.getZakaznikByID(1));
    cout << endl;

    if (k.isKnihaVypujcena(k.getKnihaByID(0))) {
        cout << "kniha je vypujcena" << endl;
    }
    else {
        cout << "kniha neni vypujcena" << endl;
    }

    if (k.isKnihaVypujcena(k.getKnihaByID(1))) {
        cout << "kniha je vypujcena" << endl;
    }
    else {
        cout << "kniha neni vypujcena" << endl;
    }

}