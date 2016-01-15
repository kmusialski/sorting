//
// Created by brekol on 15.01.16.
//

#ifndef SORTING_COLLECTOR_H
#define SORTING_COLLECTOR_H


#include "Algorithm.h"

class Collector {
public:
    Collector();
    int getResult();

private:
    vector<Algorithm*> possibleAlgorithms;
    vector<int> intTable;
};


#endif //SORTING_COLLECTOR_H
