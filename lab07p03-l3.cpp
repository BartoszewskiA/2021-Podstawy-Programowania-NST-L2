#include <iostream>
#include <fstream>
#include <string>

using namespace std;
string nowa_nazwa(string nazwa);
string przetwarzanie(string s);

int main()
{
    fstream plik01, plik02;
    string p1, p2, temp;
    cout << "podaj nazwe pliku: ";
    getline(cin, p1);
    plik01.open(p1, ios::in);
    if (!plik01.good())
    {
        cout << "Zla nazwa pliku";
        return 0;
    }
    p2 = nowa_nazwa(p1);
    plik02.open(p2, ios::out);

    while (!plik01.eof())
    {
        getline(plik01, temp);
        plik02 <<  temp; //przetwarzanie(temp);
    }

    plik01.close();
    plik02.close();
    return 0;
}

string nowa_nazwa(string nazwa)
{
    string wynik = "";
    int poz = nazwa.find('.');
    if (poz > 0)
    {
        wynik = nazwa.substr(0, poz);
        wynik += "_komp";
        wynik += nazwa.substr(poz, nazwa.length() - poz);
        return wynik;
    }
    else
    {
        return "beznazwy_komp.txt";
    }
}

string przetwarzanie(string s)
{
    string temp = "";
    for (int i = 0; i < s.length(); i++)
        if (s[i] != ' ')
            temp += s[i];
    return temp;
}