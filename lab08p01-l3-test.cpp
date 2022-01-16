#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct pytanie
{
    string tresc;
    string odp_1;
    string odp_2;
    string odp_3;
    int prawidlowa;
};
pytanie tab[20];
int liczba_pytan = 0;

int wczytaj_pytania();
bool zadaj_pytanie(int nr);

int main()
{
    liczba_pytan = wczytaj_pytania();
    int wynik=0;
    for(int i=0; i<liczba_pytan; i++)
        if (zadaj_pytanie(i))
            wynik++;
    cout<<endl<<"Uzyskales "<<wynik<<" punktow na "<<liczba_pytan<<" mozliwych";
    // if (zadaj_pytanie(1))
    //     cout << "brawo";
    // else
    //     cout << "buuuu";
    // return 0;
}

int wczytaj_pytania()
{
    fstream plik;
    string s;
    int ile = 0;
    plik.open("pytania.txt", ios::in);
    if (!plik.good())
    {
        cout << "Blad pliku";
        return 0;
    }
    while (!plik.eof())
    {
        getline(plik, s);
        if (s.length()==0) break;
        tab[ile].tresc = s;
        getline(plik, s);
        tab[ile].odp_1 = s;
        getline(plik, s);
        tab[ile].odp_2 = s;
        getline(plik, s);
        tab[ile].odp_3 = s;
        getline(plik, s);
        tab[ile].prawidlowa = atoi(s.c_str());
        ile++;
    }
    plik.close();
    return ile;
}

bool zadaj_pytanie(int nr)
{
    string s;
    cout << endl
         << "-----------------------------------------------------" << endl;
    cout << tab[nr].tresc << endl;
    cout << "1) " << tab[nr].odp_1 << endl;
    cout << "2) " << tab[nr].odp_2 << endl;
    cout << "3) " << tab[nr].odp_3 << endl;
    cout << "Wybierz odpowiedz (1/2/3): ";
    getline(cin, s);
    int odp = atoi(s.c_str());
    if (odp == tab[nr].prawidlowa)
        return true;
    else
        return false;
}
