#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string temp;
    string tab[100];
    int n = 0; //pozycja
    while (1)
    {
        cout << ":";
        getline(cin, temp);
        if (temp.length() == 0) //temp==""
            break;
        tab[n] = temp;
        n++;
    }
    fstream plik;
    plik.open("wy.txt", ios::out);
    if (!plik.good())
    {
        cout << "Blad pliku";
        return 0;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << tab[i] << endl;
        plik << tab[i] << endl;
    }

    plik.close();
    return 0;
}