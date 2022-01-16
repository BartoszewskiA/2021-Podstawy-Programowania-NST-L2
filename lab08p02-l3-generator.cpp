#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    string s;
    plik.open("pytania.txt",ios::app);
    while(1)
    {
        cout<<"Dodac pytanie? (t/n): ";
        getline(cin,s);
        if (s!="t")
            break;

        cout<<"Podaj tresc pytania: ";
        getline(cin,s);
        plik<<s<<endl;
        cout << "Podaj odpowiedz 1: ";
        getline(cin, s);
        plik << s << endl;
        cout << "Podaj odpowiedz 2: ";
        getline(cin, s);
        plik << s << endl;
        cout << "Podaj odpowiedz 3: ";
        getline(cin, s);
        plik << s << endl;
        cout << "Podaj numer prawidlowej odpowiedzi: ";
        getline(cin, s);
        plik << s << endl;
    }

    plik.close();
    return 0;
}