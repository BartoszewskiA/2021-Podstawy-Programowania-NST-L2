#include <iostream>
#include <string>

using namespace std;

void wypisz(string t[], int ile);
int wczytaj(string t[]);

int main()
{
    string tab[100];
    int n = 0;
    n = wczytaj(tab);
    wypisz(tab, n);
    return 0;
}

void wypisz(string t[], int ile)
{
    for (int i = 0; i < ile; i++)
        cout << t[i] << " : ";
}

int wczytaj(string t[])
{
    int poz =0;
    string temp;
    do
    {
        cout<<":";
        getline(cin,temp);
        if (temp.length()>0)
        {
            t[poz] = temp;
            poz++;
        }
    } while (temp.length()>0);  // temp == ""
    return poz;
}