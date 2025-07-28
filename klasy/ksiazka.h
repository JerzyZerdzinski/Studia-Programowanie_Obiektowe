#ifndef KSIAZKA_H
#define KSIAZKA_H
#include <string>

using namespace std;
class Ksiazka {
    protected: 
    string tytul;
    string autor;
    int indeks;
    
    public:
    bool czyDostepna;
    Ksiazka(string tytul, string autor,int indeks, bool czyDostepna);
    string getTytul() const;
    string getAutor() const;
    int getIndeks() const;
    bool getDostepna() const;
    void wypozycz();
    void zwroc();
};


#endif 