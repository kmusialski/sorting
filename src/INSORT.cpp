#include "INSORT.h"
typedef chrono::high_resolution_clock Clock;
 void INSORT::setTrials(int trials) {
    trial = trials;
}


void INSORT::CinArray()
{
    //srand( time( NULL ) );
auto t1 = Clock::now();
clock_t startTime = clock();
  //cout<<"Enter s number of elements\n";
  n=trial;

  //cout<<"Enter integers\n";

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
auto t2 = Clock::now();
clock_t endTime = clock();
clock_t clockTicksTaken = endTime - startTime;
timeInseconds = clockTicksTaken/(double) CLOCKS_PER_SEC;
//cout<<"chrono "<<chrono::duration_cast<chrono::nanoseconds>(t2-t1).count()<<endl;
}

void INSORT::PrintResult(){

  cout<<"Sorted list by insertion in ascending order:\n";

  for (c = 0; c <= n - 1; c++) {
    cout<<array[c]<<" ";
  }
  cout<<endl;
cout<<"uplynelo "<<timeInseconds*1000000<<" nanosekund"<<endl;

}
