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
    PlikZUzytkownikami plikZUzytkownikami;

public:
    KsiazkaAdresowa();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};

#endif // KSIAZKAADRESOWA_H
