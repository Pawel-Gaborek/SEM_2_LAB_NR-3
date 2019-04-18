//
//  LABOLATORIUM_NR-3.cpp
//  LABOLATORIUM_NR-3
//
//  Created by Paweł Gaborek on 15/04/2019.
//  Copyright © 2019 Paweł Gaborek. All rights reserved.
//

#include "LABOLATORIUM_NR-3.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

//ponizej tworze strukture dla jednego zawodnik
//wedlug wykladu Pana dr Fedorowa, w C++ struktura i klasa sie praktycznie nie roznia
//roznia sie jedynie sposobem dostepu wlasnosciami, sposobem dostepu do zmiennych
//wyklad nr 1, slajd nr 16
using namespace std;

//rozpoczynam pisanie kodu dla klasy opisujacej pojedynczego zawodnika
//moglbym uzyc przykladowej struktury zamiennie ktora napisalem powyzej
class PersonalOfPlayer
{
    public:
    string PlayerName;
    string PlayerSurname;
    string PlayerHeight;
    string PlayerAge;
    string PlayerPosition;
    //ponizej tworze metode przypisania do struktury odpowiednich danych
    PersonalOfPlayer(string getName, string getSurname, string getHeight, string getAge, string getPosition):
    PlayerName(getName),
    PlayerSurname(getSurname),
    PlayerHeight(getHeight),
    PlayerAge(getAge),
    PlayerPosition(getPosition)
    {
        
    }
};

//rozpoczynam pisanie kodu dla klasy grupujacej zawodnikow do okreslonej druzyny
class TeamNumberTeam
{
    //team(vector<PersonalOfPlayer>)
    //ponizej w czesci publicznej tworze funkcjie
    public:
    string nameOfTeam;
    vector < PersonalOfPlayer > Team;
    
    TeamNumberTeam(string nameTeam, vector < PersonalOfPlayer > teamPlayer):
    nameOfTeam(nameTeam), Team(teamPlayer)
    {
        
    }
  
    
};
//rozpoczynam pisanie kodu dla konstruktora kopiujacego zawodnikow druzyny nr 2 do druzyny nr 3

class CopyConstructorTeamPlayers
{
    public:
        //CopyTeam(const CopyTeam &);
    private:
    double real, imaginary;
};

//rozpoczynam funkcjie glowna
int main()
{
    using namespace std;
    //ponizej definiuje zmienne i ich typy (glownie dla menu kontekstowego dla menu uzytkownika)
    char choice;
    int exit = 0;
    char continuation;
    int TeamNumbers;
    int numberPlayers;
    int i;
    int j;
    int k;
    string name;
    
    while(exit==0)
    {
        cout << "Super ! Wlasnie uruchomiles program do labolatorium nr 3 na kierunku Informatyka\n";
        cout << "Program umozliwi Ci stworzenie kilku druzyn. Od 2 do ''n''.\n";
        cout << "Jezeli bedziesz chcial to bedziesz mogl przekopiowac za pomoca konstruktora zawodnikow\n";
        cout << "jednej druzyny do drugiej druzyny.\n";
        cout << "Powodzenia i fajnej zabawy przy tworzeniu druzyny marzen ktora zwycieza w ''Champions Leage'' !\n";
        cout << "\n\n\n\n\n";
        cout << "Podaj liczbe druzyn ktore maja wystapic w lidze mistrzow w sezonie 2020/21: \n";
        cin >> TeamNumbers;
        
   
        cout << "\n Super ! Teraz podaj ile zawodnikow moze liczyc kazda druzyna dopuszczona do turnieju:\n";
        cin >> numberPlayers;
        cout << "Super ! Teraz mozesz podac dane kazdego zawodnika";
        
        vector < PersonalOfPlayer > OnePlayer;
        
        //vector <vector < PersonalOfPlayer >> TeamNumberTeam;
        
        for ( k=0 ; k<TeamNumbers ; k++)
        {
            //TeamNumberTeam.push_back(OnePlayer);
            
            TeamNumberTeam.push_back(TeamNumberTeam(name, OnePlayer));
        }
        
        
        for ( j=0 ; j<numberPlayers ; j++)
        {
            cout << "\nPodaj nazwisko zawodnika nr\t" << j+1 << ":\n";
            string name;
            cin >> name;
            cout << "\nPodaj imie zawodnika nr\t" << j+1 << ":\n";
            string surname;
            cin >> surname;
            cout << "\nPodaj wzrost zawodnika nr\t" << j+1 << ":\n";
            string height;
            cin >> height;
            cout << "\nPodaj wiek zawodnika nr\t" << j+1 << ":\n";
            string age;
            cin >> age;
            cout << "\nPodaj pozycje zawodnika nr\t" << j+1 << ":\n";
            string position;
            cin >> position;
            //ponizej dodaje zawodnika do kontenera druzyny [ojedynczej
            OnePlayer.push_back(PersonalOfPlayer(name, surname, height, age, position));
        }
        cout << "\nSuper ! Wlasnie podales dane zawodnikow dla druzyny nr:" << j << "\n";
        cout << "Ponizej sprawdzimy czy dane zostana wyswietlone poprawnie";
        
        for ( i=0 ; i<numberPlayers ; i++)
        {
            
            cout << "\nNazwisko zawodnika:\t" << OnePlayer[i].PlayerName;
            cout << "\nImie zawodnika:\t" << OnePlayer[i].PlayerSurname;
            cout << "\nWzrost zawodnika:\t" << OnePlayer[i].PlayerHeight;
            cout << "\nWiek zawodnika:\t" << OnePlayer[i].PlayerAge;
            cout << "\nPozycja zawodnika:\t" << OnePlayer[i].PlayerPosition << "\n";
        }
        
        
     
        while(1)
        {
            cout << "\nProgram wlasnie zakonczyl swoje dzialanie";
            cout << "Czy chcesz uruchomic program ponownie ??";
            cout << "W przypadku ponownego uruchomienia wpisz litere ''t'', w przerciwnym razie wpisz litere ''n''.";
            cout << "Pamietaj ze wielkosc liter ma zmaczenie.\n\n\n";
            cin >> continuation;
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
    return 0;
    
    
}
