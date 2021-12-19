#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    string nazwa_pliku, temp;
    cout << "Jaki plik wyswietlic: ";
    getline(cin, nazwa_pliku);

    plik.open(nazwa_pliku, ios::in);

    if (!plik.good())
    {
        cout << "Zla nazwa pliku";
        return 0;
    }

    while(!plik.eof())
    {
        getline(plik,temp);
        cout<<temp<<endl;
    }
    plik.close();
    return 0;
}