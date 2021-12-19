#include <iostream>

using namespace std;
string nowa_nazwa(string nazwa);
string usun_spacje(string s);

int main()
{
    cout << nowa_nazwa("plik.txt");
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
