#ifndef ADRESATMENEGER_H
#define ADRESATMENEGER_H


#include <iostream>
#include <vector>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
    int podajIdWybranegoAdresata();
    char wybierzOpcjeZMenuEdycja();
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);


public:
    AdresatMenedzer(string nazwaPlikuZAdresatami = "", string nazwaPlikuZAdresatamiTymczasowa = "", int idZalogowanegoUzytkownika = 0)
        : plikZAdresatami(nazwaPlikuZAdresatami, nazwaPlikuZAdresatamiTymczasowa), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };

    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void usunAdresata();
    void edytujAdresata();

    char wybierzOpcjeZMenuUzytkownika();

};

#endif // ADRESATMENEGER_H
