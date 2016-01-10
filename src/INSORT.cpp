#include "INSORT.h"

 void INSORT::setTrials(int trials) {
    trial = trials;
}


void INSORT::CinArray()
{
    srand( time( NULL ) );
  int n, array[1000], c, d, t;

  cout<<"Enter number of elements\n";
  n=trial;

  cout<<"Enter integers\n";

  for (c = 0; c < n; c++) {
    array[c]=rand();
  }

  for (c = 1 ; c <= n - 1; c++) {
    d = c;

    while ( d > 0 && array[d] < array[d-1]) {
      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;

      d--;
    }
  }

  cout<<"Sorted list in ascending order:\n";

  for (c = 0; c <= n - 1; c++) {
    cout<<array[c]<<" ";
  }
  cout<<endl;
}
