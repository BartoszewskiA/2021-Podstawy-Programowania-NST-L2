#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout<<"podaj zdanie:";
    getline(cin,s);

    for (int i=0; i<s.length(); i++)
        if (s[i] == ' ')
            s[i] = '_';
    // for (int i = 0; i < s.length(); i++)
    //     if (s[i] == ' ')
    //         cout<<"_";
    //     else
    //         cout<<s[i];

    cout<<endl<<"s="<<s;
    return 0;
}