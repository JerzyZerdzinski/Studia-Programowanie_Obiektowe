#include "osoba.h"

Osoba::Osoba(string imie, string nazwisko, string email, int numer) : imie(imie), nazwisko(nazwisko), email(email), numer(numer) {
}

string Osoba::przedstawSie() const{
    return imie + " " + nazwisko;
}