//
//  LABOLATORIUM_NR-3.cpp
//  LABOLATORIUM_NR-3
//
//  Created by Paweł Gaborek on 15/04/2019.
//  Copyright © 2019 Paweł Gaborek. All rights reserved.
//

#include "LABOLATORIUM_NR-3.hpp"


//rozpoczynam pisanie kodu dla klasy opisujacej pojedynczego zawodnika
class PersonalOfPlayer
{
    ;
}
//rozpoczynam pisanie kodu dla klasy grupujacej zawodnikow do okreslonej druzyny
class TeamWithPlayers
{
    ;
}
//rozpoczynam pisanie kodu dla konstruktora kopiujacego zawodnikow druzyny nr 2 do druzyny nr 3
class ConstructorTeamPlayers
{
    
}

//rozpoczynam funkcjie glowna
int main
{
    using namespace std;
    //ponizej definiuje zmienne i ich typy (glownie dla menu kontekstowego dla menu uzytkownika)
    char choice;
    int exit==0;
    char continuation;
    int TeamNumbers;
    
    while(exit==0)
    {
        cout << "Super ! Wlasnie uruchomiles program do labolatorium nr 3 na kierunku Informatyka"
        cout << "Program umozliwi Ci stworzenie kilku druzyn. Od 2 do ''n''."
        cout << "Jezeli bedziesz chcial to bedziesz mogl przekopiowac za pomoca konstruktora zawodnikow"
        cout << "jednej druzyny do drugiej druzyny."
        cout << "Powodzenia i fajnej zabawy przy tworzeniu druzyny marzen ktora zwycieza w ''Champions Leage'' !"
        cout << "/n/n/n/n/n/n/n/n/n/n/n/n/n/n"
        cout << "Podaj liczbe druzyn: n/"
        
        TeamNumbers = getchar();
        
        
        
        while(1)
        {
            cout << "Program wlasnie zakonczyl swoje dzialanie";
            cout << "Czy chcesz uruchomic program ponownie ??";
            cout << "W przypadku ponownego uruchomienia wpisz litere ''t'', w przerciwnym razie wpisz litere ''n''.";
            cout << "Pamietaj ze wielkosc liter ma zmaczenie.";
            continuation=getchar();
            if(continuation=='t')
            {
                break;
            }
            else
            {
                cout << "Niestety podales bledna litere";
                cout << "Sproboj jeszcze raz";
            }
            
        }
            cout << "Szkoda ze nie chcesz ponownie uruchomic programu";
            cout << "Moze nastepnycm razem. Powodzenia !!!";
    }
}
