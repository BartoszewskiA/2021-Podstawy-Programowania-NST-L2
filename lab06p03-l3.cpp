#include <iostream>
#include <string>

using namespace std;
string rodo(string s);

int main()
{
    string s;
    cout << "podaj zdanie:";
    getline(cin, s);
    s = rodo(s);
    cout << endl
         << "s=" << s;
    return 0;
}
string rodo(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (s[i] >= 'a' && s[i <= 'z'])
            s[i] = '#';
    return s;
}