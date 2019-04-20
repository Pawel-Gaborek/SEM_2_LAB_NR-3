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
#include <algorithm>

using namespace std;

//ponizej tworze klase z konstruktorem dla nazwy zespolu
class TeamName
{
public:
    string nameOfTeam;
    //ponizej tworze kontruktor. Nawa musi byc taka sama jak nazwa klasy = "TeamName"
    TeamName(string Team_Name):
    nameOfTeam(Team_Name)
    {
        
    }
};
    

//ponizej tworze strukture z danymi zawodnika pojedynczego
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
    //string nameOfTeam;
    //vector < PersonalOfPlayer > Team;
    
    //TeamNumberTeam(string nameTeam, vector < PersonalOfPlayer > teamPlayer):
    //nameOfTeam(nameTeam), Team(teamPlayer)
    //{
        
    //}
    //vector < vector < PersonalOfPlayer > > TeamNumberTeam;
    
};
//rozpoczynam pisanie kodu dla konstruktora kopiujacego zawodnikow druzyny nr 2 do druzyny nr 3

/*class CopyConstructorTeamPlayers
{
    public:
CopyConstructorTeamPlayers():
        //CopyTeam(const CopyTeam &);
    {
        
    }
    private:
    vector<PersonalOfPlayer> real;
    vector<PersonalOfPlayer> imaginary;
};
*/

//ponizej tworze klase wypisujaca wszystkich zawodnikow
/*class printPlayers;
{
    
private:
    printPlayers(char choice):
    {
        if (choice=='t')
        {
            
        }
    }
};
*/


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
    int l;
    string teamTeam;
    string name;
    int YourNumber;
    int YorNumberPlayer;
    char choice2;
    char choice3;
    char choice4;
    int z;
    int x;
    int c;
    
    while(exit==0)
    {
        cout << "Super ! Wlasnie uruchomiles program do labolatorium nr 3 na kierunku Informatyka\n";
        cout << "Program umozliwi Ci stworzenie kilku druzyn. Od 2 do ''n''.\n";
        cout << "Jezeli bedziesz chcial to bedziesz mogl przekopiowac za pomoca konstruktora zawodnikow\n";
        cout << "jednej druzyny do drugiej druzyny.\n";
        cout << "Powodzenia i fajnej zabawy przy tworzeniu druzyny marzen ktora zwycieza w ''Champions Leage'' !\n";
        cout << "\n\n\n";
        cout << "Podaj liczbe druzyn ktore maja wystapic w lidze mistrzow w sezonie 2020/21: \n";
        cin >> TeamNumbers;
        
   
        cout << "\n Super ! Teraz podaj ile zawodnikow moze liczyc kazda druzyna dopuszczona do turnieju:\n";
        cin >> numberPlayers;
        cout << "Super ! Teraz mozesz podac dane kazdego zawodnika oraz nazwe druzyny";
        cout << "\n\n\n";
        //ponizej podaj w nawiasach < typ zmiennej > jakim bedzie wypelniony moj kontener jednego zawodnika.
        //Mogle wybrac integera, char itp., jednak na potrzeby programu pojedynczy kontener zawodnika nalezy
        //wypelnic innym typem, a mianowicie typem struktury z klasy ktora zostala utworzona i dodatkowo
        //zostal stworzony konstruktor "PersonalOfPlayer. W C++ struktura "struct" i klasa "class"
        //sa bardzo pododbne
        
        vector < PersonalOfPlayer > OnePlayer;
        
        //Ponizej tworze kontener dla zespolu pojedynczego ktory zawiera w sobie struktury informacji o
        //pojedynczych zawodnikach. Czyli wypelniam kontener "OneTeam" pojedynczym kontenerami = zawodnikami,
        //co czynie podajac liczbe iteracji w petli.
        //ponizej takze przekazuje informacje, że wypełnienie kontenera "OneTeam" bedzie dokonane poprzez
        //typ którym jest wektor "OnePlayer". Tak tworzę drużynę.
        
        vector < vector < PersonalOfPlayer > > OneTeam;
        
        //ponizej tworze wektor ktory bedzie grupowac wszystkie zespoly do kontenerka "ChampionsLeage"
        vector < vector < vector < PersonalOfPlayer > > > ChampionsLeage;
        
        //ponizej tworze wektor dla nazw zespolow. Podaje takze typ ktorymi ma byc wypelniony.
        vector < TeamName > Team_Name_Name;
        
        //ponizej tworze petle w petli ktora ma zadanie dodac druzyny i zawodnikow do poszczegolnych druzyn
        for ( l=0 ; l<TeamNumbers ; l++)
        {
            //ponizej pobieram od uzytkownika nazwe druzyny ktora pozniej przekaze do konstruktora
            //z nazwami druzyn TeamName.
            cout << "\nPodaj nazwe druzyny nr:\t" << l+1 << "\n";
            cin >> teamTeam;
            
            Team_Name_Name.push_back(teamTeam);
            
            //ponizej petla wypelniam kontener "OneTeam" zawodnikami. Czyli dodaje do kontenera okreslona
            //ilosc innych kontenerkow = zawodnikow
            
            for ( k=0 ; k<numberPlayers ; k++)
            {
                OneTeam.push_back(OnePlayer);
            }
            
            //ponizej wypelniem wekor druzyny zawodnikami (wektorem z zawodnikami)
            
            
            
            //ponizej za pomoca petli wypelniam kontenerek z pojedynczym zawodnikiem
            for ( j=0 ; j<numberPlayers ; j++)
            {
                cout << "\nPodaj nazwisko zawodnika nr\t" << j+1 << "\t dla druzyny numer:" << l+1 << ":\n";
                string name;
                cin >> name;
                cout << "\nPodaj imie zawodnika nr\t" << j+1 << "\t dla druzyny numer:" << l+1 << ":\n";
                string surname;
                cin >> surname;
                cout << "\nPodaj wzrost zawodnika nr\t" << j+1 << "\t dla druzyny numer:" << l+1 << ":\n";
                string height;
                cin >> height;
                cout << "\nPodaj wiek zawodnika nr\t" << j+1 << "\t dla druzyny numer:" << l+1 << ":\n";
                string age;
                cin >> age;
                cout << "\nPodaj pozycje zawodnika nr\t" << j+1 << "\t dla druzyny numer:" << l+1 << ":\n";
                string position;
                cin >> position;
                //ponizej dodaje zawodnika do kontenera, jego dane poprzez konstruktor.
                OnePlayer.push_back(PersonalOfPlayer(name, surname, height, age, position));
                
            }
            
            //ponizej dodaje zawdnikow do kontenerka okreslonej druzyny
            
            
            
            cout << "\nSuper ! Wlasnie podales dane zawodnikow dla druzyny nr:" << l+1 << "\n";
            cout << "Ponizej sprawdzimy czy dane zostana wyswietlone poprawnie\n";
            //ponizej aby sprawdzic czy wprowadzilem poprawnie korzystam z petli iteracyjnej do wypisania
            //poszczegolnych danych pojedynczego zawodnika
            for ( i=0 ; i<numberPlayers ; i++)
            {
                cout << "\nNazwisko zawodnika nr:\t" << i+1 << " to " << OnePlayer[i].PlayerName;
                cout << "\nImie zawodnika nr:\t" << i+1 << " to " << OnePlayer[i].PlayerSurname;
                cout << "\nWzrost zawodnika nr:\t" << i+1 << " to " << OnePlayer[i].PlayerHeight;
                cout << "\nWiek zawodnika nr:\t" << i+1 << " to " << OnePlayer[i].PlayerAge;
                cout << "\nPozycja zawodnika nr:\t" << i+1 << " to " << OnePlayer[i].PlayerPosition << "\n";
            }
        }
        
        //ponizej dodaje kontenerek z zespolem w ktorym sa zawodnicy do rozgrywek, w tym przy przypadku
        //uznalem ze wszystkie zespoly sie zakwalifikowaly, ale  oglbym zrobic przykladowo
        //inny konterek z rozgrywkami "Liga Europy"
        
        ChampionsLeage.push_back(OneTeam);
        
        //ponizej sprawdzam czy strukture poprawnie utworzylem
        //tworze do tego celu dwie opcje wyswietlania zawartosci wektorow
        //pierwszy poprzez po kolei wyswietlenie kazdej druzyny i kazdego zawodnika
        //oraz drugi gdzie uzytkownik ma wybor ktorego zawodnika z ktorej druzyny chce wyswietlic
        
        
        cout << "Size wektora ChampionsLeage: " << ChampionsLeage.size() << '\n';
        cout << "Size wektora OneTeam: " << OneTeam.size() << '\n';
        cout << "Size wektora OnePlayer: " << OnePlayer.size() << '\n';
        cout << "Size wektora Team_Name_Name: " << Team_Name_Name.size() << '\n';
        
        
        ///////////////////////////////////////////////////////////////////////////////////////////////
        ///////////////////////////////////////////////////////////////////////////////////////////////
        cout << "Czy chcesz utworzyc kolejna druzyne ktora bedzie kopia ostatiej ??";
        cout << "W przypadku ponownego uruchomienia wpisz litere ''t'', w przerciwnym razie wpisz litere ''n''.";
        cin >> choice2;
        if ( choice2 == 't')
        {
            cout << "Podaj nazwe kolejnej druzyny";
        }
        else
        {
            cout << "No niestety, przykro mi, le najwidoczniej nie chcesz dodac kolejnej druzyny";
            cout << "Moze nastepnym razem";
            cin >> teamTeam;
            Team_Name_Name.push_back(teamTeam);
            ChampionsLeage.push_back(OneTeam);
        }
        
        ///////////////////////////////////////////////////////////////////////////////////////////////
        ///////////////////////////////////////////////////////////////////////////////////////////////
        cout << "\nCzy chcesz wyswietlic zawodnikow ze wszystkich druzyn ??";
        cout << "\nW przypadku wyboru ''tak'' wpisz litere ''t'', w przerciwnym razie wpisz litere ''n''.";
        cin >> choice3;
        if (choice3 == 't')
        {
                for ( x=0 ; x<TeamNumbers ; x++)
                {
                    cout << "Ponizej zostana wypisani zawodnicy z druzyny:\t" << Team_Name_Name[x].nameOfTeam;
                    for ( c=0 ; c<numberPlayers ; c++ )
                    {
                        cout << "\nNazwisko zawodnika nr:\t" << c << " to: " << ChampionsLeage[0][x][c].PlayerName;
                        cout << "\nImie zawodnika:\t" << c << " to: " << ChampionsLeage[0][x][c].PlayerSurname;
                        cout << "\nWzrost zawodnika:\t" << c << " to: " << ChampionsLeage[0][x][c].PlayerHeight;
                        cout << "\nWiek zawodnika:\t" << c << " to: " << ChampionsLeage[0][x][c].PlayerAge;
                        cout << "\nPozycja zawodnika:\t" << c << " to: " << ChampionsLeage[0][x][c].PlayerPosition << "\n";
                    }
                }
        }
            
        else
        {
            cout << "Niestety zdecydowales by nie wyswietlac calej listy druzyn i zawodnikow";
            cout << "Ale masz ponizej jeszcze jedna opcje do wyboru.";
        }
        
        
        ///////////////////////////////////////////////////////////////////////////////////////////////
        ///////////////////////////////////////////////////////////////////////////////////////////////
        
        
        cout << "Czy chcesz wyswietlic dane okreslonego zawodnika z okreslonej druzyny ??";
        cout << "W przypadku ponownego uruchomienia wpisz litere ''t'', w przerciwnym razie wpisz litere ''n''.";
        cin >> choice4;
        if (choice3 == 't')
        {
            
        }
        else
        {
            cout << "Niestety zdecydowales by nie wyswietlac danych okreslonego zawodnika.";
            cout << "Moze nastepnym razem.";
        }
        
        ///////////////////////////////////////////////////////////////////////////////////////////////
        ///////////////////////////////////////////////////////////////////////////////////////////////
        
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
