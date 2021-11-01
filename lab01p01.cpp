#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    double wynik;
    int x;
    int y;
    cout << "x =";
    cin >> x;
    cout << "y =";
    cin >> y;
    if ( y != 0)
    {
        wynik = (double)x / y;
        cout << "wynik = "<< wynik;
    }
       
    return 0;
}