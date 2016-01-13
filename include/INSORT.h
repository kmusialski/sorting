#include <stdio.h>
#include<iostream>
#include<ctime>
#include <cstdlib>
#include <chrono>
#ifndef INSORT_H
#define INSORT_H

using namespace std;
class INSORT
{
    public:
        void setTrials(int trials);
        void CinArray();
        void PrintResult();
    protected:
    private:
        int trial;
        int n, array[10000], c, d, t;
        double timeInseconds;
};

#endif // INSORT_H
