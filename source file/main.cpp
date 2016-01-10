#include "BSORT.h"
#include "INSORT.h"
#include "SELSORT.h"

SELSORT createSELSORT();
BSORT createBSORT(int trials);
INSORT createINSORT(int trials);


int main()
{
createBSORT(5);
createINSORT(5);
createSELSORT();
}
SELSORT createSELSORT(){
SELSORT selsort;
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
