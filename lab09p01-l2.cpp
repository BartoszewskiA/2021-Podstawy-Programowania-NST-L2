#include <iostream>
#include <fstream>
#include <string>

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
    // while (!plik.eof())
    // {
    //     getline(plik,s);
    // }
    getline(plik, s);
    //int nr = (int)s[0];
    for (int i = 0; i < s.length(); i++)
        if ((int)s[i] >= (int)'A' && (int)s[i] <= (int)'Z')
            s1 += s[i];
        else if ((int)s[i] >= (int)'a' && (int)s[i] <= (int)'z')
            s2 += s[i];
    cout << "duze: " << s1 << endl
         << "male: " << s2;
    plik.close();
    return 0;
}