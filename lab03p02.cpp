#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int szukana, x ,ile=0;
    srand(time(NULL));
    szukana = rand() % 100 + 1;
    do
    {
        cout<<"x=";
        cin>>x;
        ile++;
        if (x>szukana)
        {
            cout << "za duzo"<<endl;
        }
        else if (x<szukana)
        {
            cout << "za mało " <<endl;
        }
    } while (x!=szukana);

    cout<< "trafiles za "<<ile <<"razem";

    return 0;
}