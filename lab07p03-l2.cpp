#include <iostream>
#include <fstream>
#include <string>

using namespace std;
string nowa_nazwa(string nazwa);
string usun_spacje(string s);

    int main()
{
    fstream plik01,plik02;
    string nazwa01, nazwa02;
    string temp;
    cout<<"Podaj nazwe pliku:";
    getline(cin,nazwa01);
    plik01.open(nazwa01,ios::in);
    if (!plik01.good())
    {
        cout<<"zla nazwa";
        return 0;
    }
    nazwa02= nowa_nazwa(nazwa01);
    plik02.open(nazwa02,ios::out);

    while(!plik01.eof())
    {
        getline(plik01,temp);
        plik02<<usun_spacje(temp);
    }
    plik01.close();
    plik02.close();
    return 0;
}

string nowa_nazwa(string nazwa)
{
    string nowa = "";
    int poz = nazwa.find('.');
    if (poz > 0)
    {
        nowa = nazwa.substr(0, poz);
        nowa += "_k";
        nowa += nazwa.substr(poz, nazwa.length() - poz);
        return nowa;
    }
    return "beznazwy_k.txt";
}

string usun_spacje(string s)
{
    string wynik = "";
    for (int i = 0; i < s.length(); i++)
        if (s[i] != ' ')
            wynik += s[i];
    return wynik;
}