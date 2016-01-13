#include "SELSORT.h"
typedef chrono::high_resolution_clock Clock;
 void SELSORT::setTrials(int trials) {
    trial = trials;
}


void SELSORT::CinArray()
{
clock_t startTime = clock();

  // cout<<"Enter number s of elements\n";
   n=trial;

  // cout<<"Enter integers\n";

   for ( c = 0 ; c < n ; c++ )
      array[c]=rand();

   for ( c = 0 ; c < ( n - 1 ) ; c++ )
   {
      position = c;

      for ( d = c + 1 ; d < n ; d++ )
      {
         if ( array[position] > array[d] )
            position = d;
      }
      if ( position != c )
      {
         swap = array[c];
         array[c] = array[position];
         array[position] = swap;
      }
   }
clock_t endTime = clock();
clock_t clockTicksTaken = endTime - startTime;
timeInseconds = clockTicksTaken/(double) CLOCKS_PER_SEC;

}

void SELSORT::printResult(){

cout<<"Sorted list by selection in ascending order:\n";

   for (c = 0 ; c < n ; c++ ){
      cout<<array[c]<<" ";
   }
   cout<<endl;
cout<<"uplynelo "<<timeInseconds*1000000<<" mikrosekund"<<endl;


}
