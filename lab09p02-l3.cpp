#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int n;
    cout << "n=";
    cin >> n;
    int *tab = new int[n]; //int tab[n] - "prawie" to samo

    for (int i = 0; i < n; i++)
        tab[i] = rand() % 2001 - 1000;

    // for (int i = 0; i < n; i++)
    // cout<<tab[i]<<" ";

    int l_d = 0, s_d = 0, l_u = 0, s_u = 0;
    for (int i = 0; i < n; i++)
        if (tab[i] >= 0)
        {
            l_d++;
            s_d += tab[i];
        }
        else
        {
            l_u++;
            s_u += tab[i];
        }
    if (l_d > 0)
        cout << "Srednia dodatnich = " << (double)s_d / l_d << endl;
    if (l_u > 0)
        cout << "Srednia ujemnych = " << (double)s_u / l_u << endl;

    delete[] tab;
    return 0;
}