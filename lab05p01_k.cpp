#include<iostream>#include<time.h>usingnamespacestd;voidwypisz_tablice(intt[],intile);voidlosuj_tablice(intt[],intile,intOd=0,intDo=100);intlosuj_tablice_v2(intt[],intile,intOd,intDo);voidzeruj_liczby_ujemne(inttab[],intile);voidsortowanie_babelkowe_tablicy(intt[],intile);intmain(){srand(time(NULL));inttab[100];intdlugosc=0;dlugosc=losuj_tablice_v2(tab,60,-10,20);wypisz_tablice(tab,dlugosc);sortowanie_babelkowe_tablicy(tab,dlugosc);wypisz_tablice(tab,dlugosc);zeruj_liczby_ujemne(tab,dlugosc);wypisz_tablice(tab,dlugosc);return0;}voidlosuj_tablice(intt[],intile,intOd,intDo){for(inti=0;i<ile;i++){t[i]=rand()%(Do-Od+1)+Od;}}intlosuj_tablice_v2(intt[],intile,intOd,intDo){for(inti=0;i<ile;i++){t[i]=rand()%(Do-Od+1)+Od;}returnile;}voidwypisz_tablice(intt[],intile){cout<<endl<<"------------------------------------------------------------------------"<<endl;for(inti=0;i<ile;i++){if(i%15==0&&i!=0)cout<<endl;cout<<t[i]<<":";}cout<<endl<<"----------------------------------------------------------------------"<<endl;}voidzeruj_liczby_ujemne(intt[],intile){for(inti=0;i<ile;i++){if(t[i]<0){t[i]=0;}}}voidsortowanie_babelkowe_tablicy(intt[],intile){inttemp;for(intj=0;j<ile;j++)for(inti=0;i<ile-j-1;i++)if(t[i]>t[i+1]){temp=t[i];t[i]=t[i+1];t[i+1]=temp;}}