#include "KsiazkaAdresowa.h"

using namespace std;

KsiazkaAdresowa::KsiazkaAdresowa()
{
    plikZUzytkownikami.wczytajUzytkownikowZPliku();
}

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}




