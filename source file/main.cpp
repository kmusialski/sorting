#include "BSORT.h"
#include "INSORT.h"
#include "SELSORT.h"
#include<ctime>
#include <iostream>

using namespace std;
SELSORT createSELSORT(int trials);
BSORT createBSORT(int trials);
INSORT createINSORT(int trials);

void Quantity(int *t){

    cout<<"Podaj liczbe losowan"<<endl;
cin>>(*t);

}


int main()
{

int trial =0;
Quantity(&trial);

    srand( time( NULL ) );
createBSORT(trial);
createINSORT(trial);
createSELSORT(trial);
}
SELSORT createSELSORT(int trials){
SELSORT selsort;
selsort.setTrials(trials);
selsort.CinArray();
return selsort;
}



INSORT createINSORT(int trials){
INSORT insort;
insort.setTrials(trials);
insort.CinArray();
return insort;
}


BSORT createBSORT(int trials){
BSORT bsort;
bsort.setTrials(trials);
bsort.CinArray();
return bsort;
}

