#ifndef CZYTELNIK_H
#define CZYTELNIK_H

#include "osoba.cpp"
// #include "ksiazka.cpp"
#include "biblioteka.cpp"
using namespace std;
#include <vector>
 
class Czytelnik : public Osoba {
protected: 
    int indeks;
    vector <string> ksiazki;
public:
    Czytelnik(string imie, string nazwisko, string email, int numer, int indeks);
    void wypozycz(string tytul, Biblioteka biblioteka);
    void oddaj(string tytul, Biblioteka biblioteka);
};

#endif