#ifndef BIBLIOTEKA_H
#define BIBLIOTEKA_H
#include <string>
#include "ksiazka.h"
#include <vector>

using namespace std;
class Biblioteka{
public:
    string nazwa;
    string email;
    int numer;
    vector<Ksiazka*> ksiazki;
    Biblioteka(string nazwa, string email, int numer);
    bool wypozyczKsiazke(string tytul); //zrobione
    void wypiszBiblioteke();   //zrobione
    void przyjmijKsiazke(string tytul); //zrobione
    void usunKsiazke(int indeks); //zrobione
    void dodajKsiazke(string tytul, string autor, int indeks, bool czyDostepne); //zrobione
    int getKsiazka(string tytul);  //zrobione
};


#endif 