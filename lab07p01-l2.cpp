
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int szukaj(string tekst, string szukana);

int main()
{
    fstream plik;
    string nazwa_pliku, temp, szukana;
    cout << "Jaki plik wyswietlic: ";
    getline(cin, nazwa_pliku);

    plik.open(nazwa_pliku, ios::in);

    if (!plik.good())
    {
        cout << "Zla nazwa pliku";
        return 0;
    }

    cout << "Czego szukasz: ";
    getline(cin, szukana);

    while (!plik.eof())
    {
        getline(plik, temp);
        if (szukaj(temp, szukana) > 0)
            cout << szukaj(temp, szukana) << "x " << temp << endl;

        // if ((int)temp.find(szukana) >= 0)
        //     cout << temp << endl;
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
            if (tekst.substr(i, dl) == szukana)
                ile++;
    }
    return ile;
}