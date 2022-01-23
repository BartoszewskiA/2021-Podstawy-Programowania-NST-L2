#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;
    string s, s1 = "", s2 = "";
    plik.open("we.txt", ios::in);
    if (!plik.good())
    {
        cout << "Blad pliku";
        return 0;
    }
    getline(plik, s);
    // while (!plik.eof())
    // {
    //     getline(plik, s);
    // }
    for (int i = 0; i < s.length(); i++)
        if ((int)s[i] >= (int)'A' && (int)s[i] <= (int)'Z')
            s1 += s[i];
        else if ((int)s[i] >= (int)'a' && (int)s[i] <= (int)'z')
            s2 += s[i];
    plik.close();

    cout << "Duze: " << s1 << endl
         << "Male: " << s2;
    return 0;
}