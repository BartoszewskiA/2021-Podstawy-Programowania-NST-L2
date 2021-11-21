#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    const int n = 1000;
    srand(time(NULL));
    int tab[n];
    for (int i = 0; i < n; i++)
        tab[i] = rand() % 201 - 100;
    // for (int i=0; i<n; i++)
    //     cout<<tab[i]<<" ";

    int x, ile = 0;
    cout << "podaj liczbe: ";
    cin>>x;
    for (int i=0; i<n; i++)
        if (tab[i]==x)
            ile++;
    cout<<"liczba "<<x<<" wystapila "<<ile<<" razy";
    return 0;
}