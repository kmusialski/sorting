#include "BSORT.h"
time_t czasStart;
time_t czasStop;

 void BSORT::setTrials(int trials) {
    trial = trials;
}

void czekaj( int iSekundy )
{
    for( clock_t koniec = clock() + iSekundy * CLOCKS_PER_SEC; clock() < koniec; )
         continue;

}

double counttime(clock_t czas)
{
    return static_cast <double >(czas)/ CLOCKS_PER_SEC;
}
void bubble_sort(long list[], long n)
{
    czasStart = time(NULL);
    //czekaj(3);
  long c, d, t;

  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (list[d] > list[d+1])
      {
        /* Swapping */

        t         = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;
      }
    }
  }
  czasStop = time (NULL);
}



void BSORT::CinArray()
{
    srand( time( NULL ) );
long array[100], n, c, d, swap;

  cout<<("Enter number of elements\n");
  n=trial;

  cout<<("Enter integers\n");

  for (c = 0; c < n; c++){
    array[c]=rand();
  }


  bubble_sort(array, n);

  cout<<("Sorted list in ascending order:\n");

  for ( c = 0 ; c < n ; c++ )
  {
     cout<<array[c]<<" ";
  }
cout<<endl;
cout<<"uplynelo "<<(difftime( czasStop,czasStart))<<endl;

}


