#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    /*
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    while (true)
    {
        if (ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() != 0)
        {
            cout << "INTERFEJS UZYTKOWNIKA" << endl;
            cout << "Twoje id: " << ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() << endl << endl;
            //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
            //ksiazkaAdresowa.dodajAdresata();
            ksiazkaAdresowa.dodajAdresata();
            ksiazkaAdresowa.dodajAdresata();
            ksiazkaAdresowa.wyswietlWszystkichAdresatow();
            ksiazkaAdresowa.wylogowanieUzytkownika();

        }
        else
        {
            cout << "Jestes wylogowany. Zaloguj sie, aby przejsc do INTERFEJSU UZYTKOWNIKA." << endl << endl;
            ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
            ksiazkaAdresowa.logowanieUzytkownika();

        }
    }

    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    */

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
    char wybor;

    while (true)
    {
        if (ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() == 0)
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            /*
            case '2':
                wyszukajAdresatowPoImieniu(adresaci);
                break;
            case '3':
                wyszukajAdresatowPoNazwisku(adresaci);
                break;
            */
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            /*
            case '5':
                idUsunietegoAdresata = usunAdresata(adresaci);
                idOstatniegoAdresata = podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(idUsunietegoAdresata, idOstatniegoAdresata);
                break;
            case '6':
                edytujAdresata(adresaci);
                break;
            */
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '9':
                ksiazkaAdresowa.wylogowanieUzytkownika();
                break;
            }
        }
    }

    return 0;
}


