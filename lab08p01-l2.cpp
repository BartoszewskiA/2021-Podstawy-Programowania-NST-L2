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
    int poprawna;
};
pytanie tab[20];

int czytaj_plik();
bool zadaj_pytanie(int nr);

int main()
{
    int wynik=0;
    int l_pytan = czytaj_plik();
    for (int i=0; i<l_pytan; i++)
        if (zadaj_pytanie(i))
            wynik++;
    cout<<"Uzyskales "<<wynik<<" punktow na "<<l_pytan<<" mozliwych";
    // if (zadaj_pytanie(2))
    //     cout<<"brawo";
    // else
    //     cout<<"buuu";
    return 0;
}

int czytaj_plik()
{
    fstream plik;
    string s;
    int poz = 0;
    plik.open("test.txt", ios::in);
    if (!plik.good())
    {
        cout << "Blad pliku";
        return 0;
    }
    while (!plik.eof())
    {
        getline(plik, s);
        if (s.length()==0) break;
        tab[poz].tresc = s;
        getline(plik, s);
        tab[poz].odp_1 = s;
        getline(plik, s);
        tab[poz].odp_2 = s;
        getline(plik, s);
        tab[poz].odp_3 = s;
        getline(plik, s);
        tab[poz].poprawna = atoi(s.c_str());
        poz++;
    }
    plik.close();
    return poz;
}

bool zadaj_pytanie(int nr)
{
    string s;
    cout << endl
         << "---------------------------------------------------------------------------" << endl;
    cout << tab[nr].tresc << endl;
    cout << "1) " << tab[nr].odp_1 << endl;
    cout << "2) " << tab[nr].odp_2 << endl;
    cout << "3) " << tab[nr].odp_3 << endl;
    cout << "Wybierz prawidlowa odpowiedz (1/2/3): ";
    getline(cin, s);
    int odp = atoi(s.c_str());
    if (odp == tab[nr].poprawna)
        return true;
    else
        return false;
}