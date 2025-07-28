#ifndef OSOBA_H
#define OSOBA_H
#include <string>

using namespace std;

class Osoba {
protected:
    string imie;
    string nazwisko;
    string email;
    int numer;

public:
    Osoba(string imie, string nazwisko, string email, int numer);
    string przedstawSie() const;
};

#endif 