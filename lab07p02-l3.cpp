#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int szukaj(string tekst, string szukana);

int main()
{
    fstream plik;
    string nazwa_pliku, zapytanie, temp;
    cout << "Jaki plik przeszukac: ";
    getline(cin, nazwa_pliku);

    plik.open(nazwa_pliku, ios::in);

    if (!plik.good())
    {
        cout << "Zla nazwa pliku";
        return 0;
    }
    cout << "Jaki tekst wyszukac: ";
    getline(cin, zapytanie);

    while (!plik.eof())
    {
        getline(plik, temp);
        if (szukaj(temp, zapytanie) > 0)
                 cout << "(" << szukaj(temp, zapytanie) << "*)" << temp << endl;
    }
    plik.close();
    return 0;
}

int szukaj(string tekst, string szukana)
{
    int ile = 0;
    int dl = szukana.length();
    if (tekst.length() >= dl)
    {
        for (int i = 0; i <= tekst.length() - dl; i++)
        {
            if (tekst.substr(i, dl) == szukana)
                ile++;
        }
    }
    return ile;
}