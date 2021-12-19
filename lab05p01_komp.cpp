#include <iostream>
#include <time.h>
using namespace std;
void wypisz_tablice(int t[], int ile);
void losuj_tablice(int t[], int ile, int Od = 0, int Do = 100);
int losuj_tablice_v2(int t[], int ile, int Od, int Do);
void zeruj_liczby_ujemne(int tab[], int ile);
void sortowanie_babelkowe_tablicy(int t[], int ile);
int main()
{
    srand(time(NULL));
    int tab[100];
    int dlugosc = 0;
    dlugosc = losuj_tablice_v2(tab, 60, -10, 20);
    wypisz_tablice(tab, dlugosc);
    sortowanie_babelkowe_tablicy(tab, dlugosc);
    wypisz_tablice(tab, dlugosc);
    zeruj_liczby_ujemne(tab, dlugosc);
    wypisz_tablice(tab, dlugosc);
    return 0;
}
void losuj_tablice(int t[], int ile, int Od, int Do)
{
    for (int i = 0; i < ile; i++)
    {
        t[i] = rand() % (Do - Od + 1) + Od;
    }
}
int losuj_tablice_v2(int t[], int ile, int Od, int Do)
{
    for (int i = 0; i < ile; i++)
    {
        t[i] = rand() % (Do - Od + 1) + Od;
    }
    return ile;
}
void wypisz_tablice(int t[], int ile)
{
    cout << endl
         << "------------------------------------------------------------------------" << endl;
    for (int i = 0; i < ile; i++)
    {
        if (i % 15 == 0 && i != 0)
            cout << endl;
        cout << t[i] << " : ";
    }
    cout << endl
         << "----------------------------------------------------------------------" << endl;
}
void zeruj_liczby_ujemne(int t[], int ile)
{
    for (int i = 0; i < ile; i++)
    {
        if (t[i] < 0)
        {
            t[i] = 0;
        }
    }
}
void sortowanie_babelkowe_tablicy(int t[], int ile)
{
    int temp;
    for (int j = 0; j < ile; j++)
        for (int i = 0; i < ile - j - 1; i++)
            if (t[i] > t[i + 1])
            {
                temp = t[i];
                t[i] = t[i + 1];
                t[i + 1] = temp;
            }
}