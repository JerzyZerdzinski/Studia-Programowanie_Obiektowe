#include "ksiazka.h"
using namespace std;

Ksiazka::Ksiazka(string tytul, string autor, int indeks, bool czyDostepna) : tytul(tytul), autor(autor), indeks(indeks), czyDostepna(czyDostepna) {
}
string Ksiazka::getTytul() const
{
    return tytul;
}
string Ksiazka::getAutor() const{
    return autor;
}
bool Ksiazka::getDostepna() const{
    return czyDostepna;
}
int Ksiazka::getIndeks() const {
    return indeks;
}
void Ksiazka::wypozycz()
{
    czyDostepna = false;
}
void Ksiazka::zwroc()
{
    czyDostepna = true;
}