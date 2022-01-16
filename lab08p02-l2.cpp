#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;
    string s;
    plik.open("test.txt", ios::app);
    while (true)
    {
        cout << "Dodac nowe pytanie? (t/n) ";
        getline(cin, s);
        if (s != "t")
            break;
        cout << "Podj tresc pytnia: ";
        getline(cin, s);
        plik << s << endl;
        cout << "Podj odpowiedz 1: ";
        getline(cin, s);
        plik << s << endl;
        cout << "Podj odpowiedz 2: ";
        getline(cin, s);
        plik << s << endl;
        cout << "Podj odpowiedz 3: ";
        getline(cin, s);
        plik << s << endl;
        cout << "Podj numer wlasciwej odpowiedzi: ";
        getline(cin, s);
        plik << s<<endl;
    }

    plik.close();
    return 0;
}