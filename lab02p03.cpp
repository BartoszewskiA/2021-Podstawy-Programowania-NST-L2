#include<iostream>

using namespace std;

int main()
{
    int n, x, suma = 0;
    cout <<"Ile liczn wczytac: ";
    cin >>n;
    for (int i=0;  i < n; i++)
        {
            cout << "x" << i+1 << " = ";
            cin >> x;
            suma = suma + x;
        }
    cout<<"Suma="<<suma<<endl;
    if (n>0)
        cout <<"Srednia = "<<(double)suma / n;
    else
        cout<<"Srednia = 0";
    return 0;
}