#include <iostream>
#include <string>

using namespace std;

string normalizuj(string tekst);

    int main()
{
    string s;
    cout << "Przedstaw sie:";
    getline(cin, s);
    int poz = s.find(' ');
    string imie = s.substr(0, poz);
    string nazwisko = s.substr(poz + 1, s.length() - (poz + 1));
    imie = normalizuj(imie);
    nazwisko = normalizuj(nazwisko);
    cout << "imie: " << imie << endl
         << "nazwisko: " << nazwisko << endl;
    return 0;
}

string normalizuj(string tekst)
{
    for (int i=0; i<tekst.length(); i++)
        tekst[i] = tolower(tekst[i]);
    tekst[0] = toupper(tekst[0]);
    return tekst;
}