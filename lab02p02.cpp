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
    cout<<"Suma="<<suma;
    return 0;
}
