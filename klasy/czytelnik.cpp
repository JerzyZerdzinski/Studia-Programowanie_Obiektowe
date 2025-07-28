#include "czytelnik.h"
#include <iostream>
#include <vector>
#include <string>
// #include "biblioteka.cpp"

using namespace std;

Czytelnik::Czytelnik(string imie, string nazwisko, string email, int numer, int indeks)
    :Osoba(imie, nazwisko, email, numer), indeks(indeks){
    }

void Czytelnik::wypozycz(string tytul, Biblioteka bilblioteka) {
    if (bilblioteka.wypozyczKsiazke(tytul)) { 
        ksiazki.push_back(tytul); 
        cout << "Wypożyczono książkę: " << tytul << endl;
    } else {
        cout << "Nie udało się wypożyczyć książki: " << tytul << " (brak dostępnych egzemplarzy)" << endl;
    }
}

void Czytelnik::oddaj(string tytul, Biblioteka bilblioteka) {
    for (auto it = ksiazki.begin(); it != ksiazki.end(); ++it) {
        if (*it == tytul) { 
            ksiazki.erase(it); 
            bilblioteka.przyjmijKsiazke(tytul); 
            cout << "Zwrot książki: " << tytul << endl;
            return;
        }
    }
    cout << "Czytelnik nie ma tej książki: " << tytul << endl;
}
