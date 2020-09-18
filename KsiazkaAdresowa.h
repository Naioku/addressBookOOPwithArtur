#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H


#include <iostream>

#include "UzytkownikMenedzer.h"
#include "MetodyPomocnicze.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer *adresatMenedzer;
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    const string NAZWA_PLIKU_Z_ADRESATAMI_TYMCZASOWA;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami, string nazwaPlikuZAdresatamiTymczasowa)
        : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami), NAZWA_PLIKU_Z_ADRESATAMI_TYMCZASOWA(nazwaPlikuZAdresatamiTymczasowa)
        {
            adresatMenedzer = NULL;
        };

        ~KsiazkaAdresowa()
        {
            delete adresatMenedzer;
            adresatMenedzer = NULL;
        };

    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wylogowanieUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();

    void dodajAdresata();
    void usunAdresata();
    void edytujAdresata();

    void wypiszWszystkichUzytkownikow();
    void wyswietlWszystkichAdresatow();

    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();

};

#endif // KSIAZKAADRESOWA_H
