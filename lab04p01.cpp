#include <iostream>

using namespace std;

int main()
{
    int x;
    int tab[100];
    int n=0;
    do
    {
        cout<<"x=";
        cin>>x;
        tab[n]=x;
        n++;

    } while (x>=0);

    for (int i=0; i<n-1; i++)
        cout<<tab[i]<<" ";
    //oblicznie sredniej
    int suma =0;
    for (int i=0; i<n-1; i++) //ostatniej liczby nie wliczamy
        suma+=tab[i];
    double srednia = (double)suma / (n-1); 
    cout<<"srednia="<<srednia;
    //wypisanie wiekszych od sredniej
    cout<<endl<<"wieksze od sredniej:";
    for (int i = 0; i < n - 1; i++)
        if (tab[i]>srednia)
            cout << tab[i] << " ";
    //wypisanie mniejsze od sredniej
    cout << endl
         << "mniejsze od sredniej:";
    for (int i = 0; i < n - 1; i++)
        if (tab[i] < srednia)
            cout << tab[i] << " ";

    return 0;
}   