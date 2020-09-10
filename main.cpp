#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");

    while (true)
    {
        if (ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() != 0)
        {
            cout << "INTERFEJS UZYTKOWNIKA" << endl;
            cout << "Twoje id: " << ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() << endl << endl;
            //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
            ksiazkaAdresowa.wylogowanieUzytkownika();

        }
        else
        {
            cout << "Jestes wylogowany. Zaloguj sie, aby przejsc do INTERFEJSU UZYTKOWNIKA." << endl << endl;
            ksiazkaAdresowa.logowanieUzytkownika();

        }
    }

    ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    return 0;
}
