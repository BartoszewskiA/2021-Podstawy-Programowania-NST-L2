#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int n;
    cout << "n=";
    cin >> n;
    int *tab = new int[n]; //int tab[n];
    for (int i = 0; i < n; i++)
        tab[i] = rand() % 2001 - 1000;
    // for (int i = 0; i < n; i++)
    //     cout << tab[i] << " ";

    int s_d = 0, l_d = 0, s_u = 0, l_u = 0;
    for (int i = 0; i < n; i++)
        if (tab[i] >= 0)
        {
            s_d += tab[i];
            l_d++;
        }
        else
        {
            s_u += tab[i];
            l_u++;
        }
    if (l_d > 0)
        cout << "sr. dodatnich = " << (double)s_d / l_d << endl;
    if (l_u > 0)
        cout << "sr. ujemnych = " << (double)s_u / l_u;
    delete[] tab;
    return 0;
}