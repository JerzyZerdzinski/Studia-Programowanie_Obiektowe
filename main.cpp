#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>

#include "klasy/czytelnik.cpp"
// #include "klasy/biblioteka.cpp"
// #include "klasy/ksiazka.cpp"
using namespace std;

void wyswietlMenu() {
    cout << "\n=== MENU BIBLIOTEKI ===" << endl;
    cout << "1. Wyświetl wszystkie książki" << endl;
    cout << "2. Dodaj książkę" << endl;
    cout << "3. Usuń książkę" << endl;
    cout << "4. Wypożycz książkę" << endl;
    cout << "5. Oddaj książkę" << endl;
    cout << "6. Zakończ program" << endl;
    cout << "Wybierz opcję: ";
}
int wybierzBiblioteke(vector<Biblioteka>& biblioteki) {
    int wybor;
    cout << "\n=== Wybierz bibliotekę ===" << endl;
    for (size_t i = 0; i < biblioteki.size(); i++) {
        cout << i + 1 << ". " << biblioteki[i].nazwa << endl;
    }
    cout << "Wybierz numer biblioteki: ";
    cin >> wybor;
    return wybor - 1;
}
int wybierzCzytelnika(vector<Czytelnik>& czytelnicy) {
    int wybor;
    cout << "\n=== Wybierz czytelnika ===" << endl;
    for (size_t i = 0; i < czytelnicy.size(); i++) {
        cout << i + 1 << ". " << czytelnicy[i].przedstawSie() << endl;
    }
    cout << "Wybierz numer czytelnika: ";
    cin >> wybor;
    return wybor - 1;
}

int main(){
    vector<Biblioteka> biblioteki;
    biblioteki.emplace_back("Miejska Biblioteka", "kontakt@bibliotekamiejska.pl", 7844);
    biblioteki.emplace_back("Wiejska Biblioteka", "kontakt@bibliotekawiejska.pl", 7842344);

    vector<Czytelnik> czytelnicy;
    czytelnicy.emplace_back("Adam", "Kowalski", "adamkowalski@mail.com", 500122300, 100);
    czytelnicy.emplace_back("Ewa", "Nowak", "ewanowak@mail.com", 500122301, 101);
    czytelnicy.emplace_back("Jan", "Wiśniewski", "janwisniewski@mail.com", 500122302, 102);
    czytelnicy.emplace_back("Anna", "Kowalczyk", "annakowalczyk@mail.com", 500122303, 103);
    czytelnicy.emplace_back("Piotr", "Kamiński", "piotrkaminski@mail.com", 500122304, 104);

    biblioteki[0].dodajKsiazke("Wiedźmin", "A. Sapkowski", 10001, true);
    biblioteki[0].dodajKsiazke("Wiedźmin", "A. Sapkowski", 10002, true);
    biblioteki[0].dodajKsiazke("Hobbit", "J.R.R. Tolkien", 10003, true);
    biblioteki[0].dodajKsiazke("Hobbit", "J.R.R. Tolkien", 10004, true);
    biblioteki[0].dodajKsiazke("Pan Tadeusz", "A. Mickiewicz", 10005, true);
    biblioteki[0].dodajKsiazke("Pan Tadeusz", "A. Mickiewicz", 10006, true);
    biblioteki[0].dodajKsiazke("Gra o Tron", "G.R.R. Martin", 10007, true);
    biblioteki[0].dodajKsiazke("Gra o Tron", "G.R.R. Martin", 10008, true);
    biblioteki[0].dodajKsiazke("Harry Potter", "J.K. Rowling", 10009, true);
    biblioteki[0].dodajKsiazke("Harry Potter", "J.K. Rowling", 10010, true);
    biblioteki[0].dodajKsiazke("Władca Pierścieni", "J.R.R. Tolkien", 10011, true);
    biblioteki[0].dodajKsiazke("Władca Pierścieni", "J.R.R. Tolkien", 10012, true);
    biblioteki[0].dodajKsiazke("Metro 2033", "D. Głuchowski", 10013, true);
    biblioteki[0].dodajKsiazke("Metro 2033", "D. Głuchowski", 10014, true);
    biblioteki[0].dodajKsiazke("Zbrodnia i Kara", "F. Dostojewski", 10015, true);
    biblioteki[0].dodajKsiazke("Zbrodnia i Kara", "F. Dostojewski", 10016, true);
    biblioteki[0].dodajKsiazke("Diuna", "F. Herbert", 10017, true);
    biblioteki[0].dodajKsiazke("Diuna", "F. Herbert", 10018, true);
    biblioteki[0].dodajKsiazke("Sherlock Holmes", "A. Doyle", 10019, true);
    biblioteki[0].dodajKsiazke("Sherlock Holmes", "A. Doyle", 10020, true);

    biblioteki[1].dodajKsiazke("Wiedźmin", "A. Sapkowski", 20001, true);
    biblioteki[1].dodajKsiazke("Wiedźmin", "A. Sapkowski", 20002, true);
    biblioteki[1].dodajKsiazke("Hobbit", "J.R.R. Tolkien", 20003, true);
    biblioteki[1].dodajKsiazke("Hobbit", "J.R.R. Tolkien", 20004, true);
    biblioteki[1].dodajKsiazke("Pan Tadeusz", "A. Mickiewicz", 20005, true);
    biblioteki[1].dodajKsiazke("Pan Tadeusz", "A. Mickiewicz", 20006, true);
    biblioteki[1].dodajKsiazke("Mistrz i Małgorzata", "M. Bułhakow", 20007, true);
    biblioteki[1].dodajKsiazke("Mistrz i Małgorzata", "M. Bułhakow", 20008, true);
    biblioteki[1].dodajKsiazke("Krzyżacy", "H. Sienkiewicz", 20009, true);
    biblioteki[1].dodajKsiazke("Krzyżacy", "H. Sienkiewicz", 20010, true);
    biblioteki[1].dodajKsiazke("Solaris", "S. Lem", 20011, true);
    biblioteki[1].dodajKsiazke("Solaris", "S. Lem", 20012, true);
    biblioteki[1].dodajKsiazke("Dziady", "A. Mickiewicz", 20013, true);
    biblioteki[1].dodajKsiazke("Dziady", "A. Mickiewicz", 20014, true);
    biblioteki[1].dodajKsiazke("Świat Zofii", "J. Gaarder", 20015, true);
    biblioteki[1].dodajKsiazke("Świat Zofii", "J. Gaarder", 20016, true);
    biblioteki[1].dodajKsiazke("Folwark Zwierzęcy", "G. Orwell", 20017, true);
    biblioteki[1].dodajKsiazke("Folwark Zwierzęcy", "G. Orwell", 20018, true);
    biblioteki[1].dodajKsiazke("Władca Pierścieni", "J.R.R. Tolkien", 20019, true);
    biblioteki[1].dodajKsiazke("Władca Pierścieni", "J.R.R. Tolkien", 20020, true);


    int indexBiblioteki = wybierzBiblioteke(biblioteki);
    int indexCzytelnika = wybierzCzytelnika(czytelnicy);
    int wybor;
    do {
        wyswietlMenu();
        cin >> wybor;
        cin.ignore(); // Zapobiega problemom z buforem wejściowym

        string tytul, autor;
        int indeks;
        Biblioteka& wybranaBiblioteka = biblioteki[indexBiblioteki];
        Czytelnik& wybranyCzytelnik = czytelnicy[indexCzytelnika];

        switch (wybor) {
            case 1:
                cout << "\nLista książek w " << wybranaBiblioteka.nazwa << ":\n";
                wybranaBiblioteka.wypiszBiblioteke();
                break;

            case 2:
                cout << "Podaj tytuł książki: ";
                getline(cin, tytul);
                cout << "Podaj autora książki: ";
                getline(cin, autor);
                cout << "Podaj indeks książki: ";
                cin >> indeks;
                cin.ignore();
                wybranaBiblioteka.dodajKsiazke(tytul, autor, indeks, true);
                cout << "Dodano książkę: " << tytul << endl;
                break;

            case 3:
                cout << "Podaj indeks książki do usunięcia: ";
                cin >> indeks;
                cin.ignore();
                wybranaBiblioteka.usunKsiazke(indeks);
                break;

            case 4:
                cout << "Podaj tytuł książki do wypożyczenia: ";
                getline(cin, tytul);
                wybranyCzytelnik.wypozycz(tytul, wybranaBiblioteka);
                break;

            case 5:
                cout << "Podaj tytuł książki do zwrotu: ";
                getline(cin, tytul);
                wybranyCzytelnik.oddaj(tytul, wybranaBiblioteka);
                break;

            case 6:
                indexBiblioteki = wybierzBiblioteke(biblioteki);
                break;

            case 7:
                indexCzytelnika = wybierzCzytelnika(czytelnicy);
                break;

            case 8:
                cout << "Zamykanie programu..." << endl;
                break;

            default:
                cout << "Nieprawidłowy wybór. Spróbuj ponownie." << endl;
                break;
        }

    } while (wybor != 8);
    return 0;
}