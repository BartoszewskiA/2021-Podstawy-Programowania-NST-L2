#include <iostream>

using namespace std;

int main()
{
    int suma = 0, ile = 0, x;
    do
    {
        cout << "x=";
        cin >> x;
        suma+=x; //suma=suma+x;
        ile++;
    } while (suma <=100);
    cout<<"W setce zmiesilo sie "<<ile-1<<" liczb";
    return 0;
}