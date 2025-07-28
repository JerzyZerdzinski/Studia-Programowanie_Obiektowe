#include "biblioteka.h"
#include <vector>
#include <iostream>
#include "ksiazka.cpp"
using namespace std;

Biblioteka::Biblioteka(string nazwa, string email, int numer) : nazwa(nazwa), email(email), numer(numer){
}
    
void Biblioteka::wypiszBiblioteke()
{
    int pom =0;
    vector <string> tytul;
    vector <int> ilosc;
    for (auto ksi : ksiazki)
    {
        string t = ksi->getTytul();
        bool znalezione = false;
        for (int i = 0; i< pom; i++){
            if (t == tytul[i] && ksi->czyDostepna){
                ilosc[i]+=1;
                znalezione = true;
                break;
            }
        }
        if (!znalezione && ksi->czyDostepna){
            tytul.push_back(t);
            ilosc.push_back(1);
            pom++;
        }
    }
    for (int i = 0; i<pom; i++){
        cout<<"Tytul ksiazki: "<<tytul[i]<<" ilosc w magazynie: "<<ilosc[i]<<endl;
    }
}

int Biblioteka::getKsiazka(string tytul){
    for (int i=0; i<ksiazki.size(); i++){
        if(ksiazki[i]->getTytul() == tytul && ksiazki[i]->getDostepna()){
            return i;
        }
    }
    return -1;
}

bool Biblioteka::wypozyczKsiazke(string tytul){
    int it = getKsiazka(tytul); 
    if (it == -1){
        return false;
    }
    ksiazki[it]->wypozycz();
    return true;
}

void Biblioteka::przyjmijKsiazke(string tytul)
{
    for (int i=0; i<ksiazki.size(); i++){
        if(ksiazki[i]->getTytul() == tytul && !ksiazki[i]->getDostepna()){
            ksiazki[i]->czyDostepna = true;
            break;
        }
    }
}

void Biblioteka::usunKsiazke(int indeks){
    for (int i=0; i<ksiazki.size(); i++){
        if(ksiazki[i]->getIndeks() == indeks && ksiazki[i]->getDostepna()){
            ksiazki.erase(ksiazki.begin()+i);
            cout<<"Usunieto ksiazke"<<endl;
            return;
        }
    }
    cout<<"Ksiazka na wypozyczeniu"<<endl;
}

void Biblioteka::dodajKsiazke(string tytul, string autor, int indeks, bool czyDostepna){
    Ksiazka* pom = new Ksiazka(tytul, autor, indeks, czyDostepna);
    ksiazki.push_back(pom);
}