# System Biblioteczny – Aplikacja Konsolowa

Projekt zaliczeniowy z przedmiotu Programowanie Obiektowe

III Semestr
Rok akademicki: 2024/2025

## Opis

System biblioteczny to konsolowa aplikacja napisana w języku C++, która umożliwia zarządzanie książkami i czytelnikami w ramach wielu bibliotek. Program został zaprojektowany zgodnie z zasadami programowania obiektowego, z wykorzystaniem klas, hermetyzacji i dynamicznych struktur danych.

## Funkcjonalności

- Obsługa wielu bibliotek (np. miejska, wiejska)
- Zarządzanie listą książek:
  - Wyświetlanie dostępnych książek
  - Dodawanie nowych pozycji
  - Usuwanie książek po indeksie
- System wypożyczania książek:
  - Czytelnik może wypożyczyć książkę z wybranej biblioteki
  - Możliwość zwrotu wypożyczonej książki
- Wybór aktywnej biblioteki i aktywnego czytelnika
- Intuicyjny, tekstowy interfejs użytkownika (`std::cout`, `std::cin`)
- Przechowywanie danych w dynamicznych kontenerach (`std::vector`)