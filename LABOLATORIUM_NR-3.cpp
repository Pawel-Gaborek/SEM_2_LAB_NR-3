#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

//ponizej definiuje klase dla nazw zesolow. W tej klasie dla odmiany korzystam z konstruktora.
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

//ponizej definiuje klase dla pojedynczego zawodnika. W c++ praktycznie struktura i klasa sie niewiele roznia,
//jednak klasa mi umozliwa definiowanie dostepnu do ziennych
class PersonalOfPlayer
{
//definiuje zmienne do ktorych jest ogolny dostep w klasie publicznej
public:
    string PlayerName;
    string PlayerSurname;
    string PlayerHeight;
    string PlayerAge;
    string PlayerPosition;
};

//ponizej okreslam klase kopiujaca. Korzystam dodatkowo z konstruktora.
class CopyTeam
{
//ponizej definiuje konstruktor CopyTeam.
public:
    CopyTeam(const CopyTeam&);
private:
//w przestrzeni prywatnej definiuje zmienne i ich typy
    string PlayerName_Copy;
    string PlayerSurname_Copy;
    string PlayerHeight_Copy;
    string PlayerAge_Copy;
    string PlayerPosition_Copy;
};
//Poza klasa pisze metode dla konstruktora.
CopyTeam::CopyTeam(const PersonalOfPlayer &source)
{
    PlayerName_Copy=source.PlayerName;
    PlayerSurname_Copy=source.PlayerSurname;
    PlayerHeight_Copy=source.PlayerHeight;
    PlayerAge_Copy=source.PlayerAge;
    PlayerPosition_Copy=source.PlayerPosition;
}




//vector(const vector& v); konstruktor kopiujacy
//vector& operator=(const vector& v);4

int main()
{
    int PlayersNumber;
    int TeamNumbers;
    int team_number;
    int player_number;
    char choice;
    char choice2;
    char choice3;
    char continuation;
    string GetTeamName;
    int exit = 0;
    
    using namespace std;
    
    
    
    while(exit==0)
    {
        //ponizej definiuje wektor z nazwami druzyn. Wypelniam go inna metoda poprzez tzw "push backi"
        vector<TeamName>teamTeam;
        //ponizej podaj w nawiasach < typ zmiennej > jakim bedzie wypelniony moj kontener jednego zawodnika.
        //Mogle wybrac integera, char itp., jednak na potrzeby programu pojedynczy kontener zawodnika nalezy
        //wypelnic innym typem, a mianowicie typem struktury z klasy ktora zostala utworzona i dodatkowo
        //zostal stworzony konstruktor "PersonalOfPlayer. W C++ struktura "struct" i klasa "class"
        //sa bardzo pododbne
        typedef vector<PersonalOfPlayer>OnePlayer;
        //Ponizej tworze kontener dla zespolu pojedynczego ktory zawiera w sobie struktury informacji o
        //pojedynczych zawodnikach. Czyli wypelniam kontener "OneTeam" pojedynczym kontenerami = zawodnikami,
        //co czynie podajac liczbe iteracji w petli.
        //ponizej takze przekazuje informacje, że wypełnienie kontenera "OneTeam" bedzie dokonane poprzez
        //typ którym jest wektor "OnePlayer". Tak tworzę drużynę.
        typedef vector<OnePlayer>OneTeam;
        //ponizej tworze wektor ktory bedzie grupowac wszystkie zespoly do kontenerka "ChampionsLeage"
        typedef vector<OneTeam>championsLeage;
        cout << "Super ! Wlasnie uruchomiles program do labolatorium nr 3 na kierunku Informatyka\n";
        cout << "Program umozliwi Ci stworzenie kilku druzyn. Od 2 do ''n''.\n";
        cout << "Jezeli bedziesz chcial to bedziesz mogl przekopiowac za pomoca konstruktora zawodnikow\n";
        cout << "jednej druzyny do drugiej druzyny.\n";
        cout << "Powodzenia i fajnej zabawy przy tworzeniu druzyny marzen ktora zwycieza w ''Champions Leage'' !\n";
        cout << "\n\n\n";
        cout << "Podaj liczbe druzyn ktore maja wystapic w lidze mistrzow w sezonie 2020/21: \n";
        cin >> TeamNumbers;
        cout << "\n Super ! Teraz podaj ile zawodnikow moze liczyc kazda druzyna dopuszczona do turnieju:\n";
        cin >> PlayersNumber;
        //ponizej definiuje wektor wielowymiarowy z okreslona liczba druzyn oraz zawodnikow
        championsLeage TheBestOfTheBest(1, OneTeam(TeamNumbers, OnePlayer(PlayersNumber) ) );
        
        
        
        //ponizej tworze petle w petli ktora ma zadanie dodac druzyny i zawodnikow do poszczegolnych druzyn
        for (int j=0 ; j<TeamNumbers ; j++)
        {
            
            cout << "\nPodaj nazwe druzyny nr:" << j+1 << endl;
            cin >> GetTeamName;
            teamTeam.push_back(TeamName(GetTeamName));
            
            for (int i=0 ; i<PlayersNumber ; i++)
            {
                cout << "\nPodaj nazwisko zawodnika nr\t" << i+1 << "\t dla druzyny numer:" << j+1 << ":\n";
                string name;
                cin >> name;
                TheBestOfTheBest[0][j][i].PlayerName=name;
                
                cout << "\nPodaj imie zawodnika nr\t" << i+1 << "\t dla druzyny numer:" << j+1 << ":\n";
                string surname;
                cin >> surname;
                TheBestOfTheBest[0][j][i].PlayerSurname=surname;
                
                cout << "\nPodaj wzrost zawodnika nr\t" << i+1 << "\t dla druzyny numer:" << j+1 << ":\n";
                string height;
                cin >> height;
                TheBestOfTheBest[0][j][i].PlayerHeight=height;
                
                cout << "\nPodaj wiek zawodnika nr\t" << i+1 << "\t dla druzyny numer:" << j+1 << ":\n";
                string age;
                cin >> age;
                TheBestOfTheBest[0][j][i].PlayerAge=age;
                
                cout << "\nPodaj pozycje zawodnika nr\t" << i+1 << "\t dla druzyny numer:" << j+1 << ":\n";
                string position;
                cin >> position;
                TheBestOfTheBest[0][j][i].PlayerPosition=position;
            }
            //ponizej aby sprawdzic czy wprowadzilem poprawnie korzystam z petli iteracyjnej do wypisania
            //poszczegolnych danych pojedynczego zawodnika
            for ( int ii=0 ; ii<PlayersNumber ; ii++)
            {
                cout << "\nNazwisko zawodnika nr:\t" << ii+1 << " to " << TheBestOfTheBest[0][j][ii].PlayerName;
                cout << "\nImie zawodnika nr:\t" << ii+1 << " to " << TheBestOfTheBest[0][j][ii].PlayerSurname;
                cout << "\nWzrost zawodnika nr:\t" << ii+1 << " to " << TheBestOfTheBest[0][j][ii].PlayerHeight;
                cout << "\nWiek zawodnika nr:\t" << ii+1 << " to " << TheBestOfTheBest[0][j][ii].PlayerAge;
                cout << "\nPozycja zawodnika nr:\t" << ii+1 << " to " << TheBestOfTheBest[0][j][ii].PlayerPosition;
            }
        }
        
        ///////////////////////////////////////////////////////////////////////////////////////////////
        ///////////////////////////////////////////////////////////////////////////////////////////////
        //ponizej kopiuje do wektora mowa druzyne
        cout << "Czy chcesz utworzyc kolejna druzyne i skopiowac zawodnikow z ostatniej druzyny ??";
        cout << "W przypadku ponownego uruchomienia wpisz litere ''t'', w przerciwnym razie wpisz litere ''n''.";
        if (choice2 == 't')
        {
            //championsLeage TheBestOfTheBest(1, OneTeam(TeamNumbers+1, OnePlayer(PlayersNumber) ) );
            //teamTeam.push_back(TeamName(GetTeamName));
            //CopyTeam(TheBestOfTheBest);
            
        }
        else
        {
            cout << "Niestety zdecydowales by nie dodawac kolejnej druzyny.";
            cout << "Ale masz ponizej jeszcze opcje wyswietlania druzyn i zawodnikow.";
        }
        
        ///////////////////////////////////////////////////////////////////////////////////////////////
        ///////////////////////////////////////////////////////////////////////////////////////////////
        //ponizej wyswietlam wszystkich zawodnikow
        cout << "\nCzy chcesz wyswietlic zawodnikow ze wszystkich druzyn ??";
        cout << "\nW przypadku wyboru ''tak'' wpisz litere ''t'', w przerciwnym razie wpisz litere ''n''.";
        cin >> choice3;
        if (choice3 == 't')
        {
            for (int ij=0 ; ij<TeamNumbers  ; ij++)
            {
                cout << "\n\n\nZawodnicy druzyny " << teamTeam[ij].nameOfTeam << "maja nastepujace dane:\n";
                
                for ( int io=0 ; io<PlayersNumber ; io++)
                {
                    cout << "\nNazwisko zawodnika nr:\t" << io+1 << " to " << TheBestOfTheBest[0][ij][io].PlayerName;
                    cout << "\nImie zawodnika nr:\t" << io+1 << " to " << TheBestOfTheBest[0][ij][io].PlayerSurname;
                    cout << "\nWzrost zawodnika nr:\t" << io+1 << " to " << TheBestOfTheBest[0][ij][io].PlayerHeight;
                    cout << "\nWiek zawodnika nr:\t" << io+1 << " to " << TheBestOfTheBest[0][ij][io].PlayerAge;
                    cout << "\nPozycja zawodnika nr:\t" << io+1 << " to " << TheBestOfTheBest[0][ij][io].PlayerPosition;
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
        //ponizej wyswietlam okreslonego zawodnika
        cout << "Czy chcesz wyswietlic dane okreslonego zawodnika z okreslonej druzyny ??";
        cout << "W przypadku ponownego uruchomienia wpisz litere ''t'', w przerciwnym razie wpisz litere ''n''.";
        cin >> choice;
        if(choice=='t')
        {
            cout << "Podaj numer druzyny ktorej dane zawodnika chcesz wyswietlic\n";
            cin >> team_number;
            cout << "Podaj numer zawodnika ktoreg dane chcesz wyswietlic\n";
            cin >> player_number;
            cout << "Zawodnik druzyny " << teamTeam[team_number].nameOfTeam << " ma nastepujace dane:";
            cout << "n\nazwisko zawodnika:";
            cout << TheBestOfTheBest[0][team_number-1][player_number-1].PlayerName << "\n" << endl;
            cout << "Imie zawodnika:";
            cout << TheBestOfTheBest[0][team_number-1][player_number-1].PlayerSurname << "\n" << endl;
            cout << "Wzrost zawodnika:";
            cout << TheBestOfTheBest[0][team_number-1][player_number-1].PlayerHeight << "\n" << endl;
            cout << "Wiek zawodnika:";
            cout << TheBestOfTheBest[0][team_number-1][player_number-1].PlayerAge << "\n" << endl;
            cout << "Pozycja na boisku zawodnika:";
            cout << TheBestOfTheBest[0][team_number-1][player_number-1].PlayerPosition << "\n" << endl;
        }
        else
        {
            cout << "Niestety, niechcesz dodac kolejnej druzyny, moze nastepnym razem";
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
