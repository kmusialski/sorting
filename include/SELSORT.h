#include <stdio.h>
#include<iostream>
#include<ctime>
#include <cstdlib>
#include <chrono>
#ifndef SELSORT_H
#define SELSORT_H


using namespace std;
class SELSORT
{
    public:
    void setTrials(int trials);
    void CinArray();
    void printResult();
    protected:
    private:
        int trial;
        int array[10000], n, c, d, position, swap;
        double timeInseconds;
};

#endif // SELSORT_H
