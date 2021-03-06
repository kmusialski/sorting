//
// Created by brekol on 15.01.16.
//

#include "vector"

using namespace std;
#ifndef SORTING_ALGORITHM_H
#define SORTING_ALGORITHM_H


class Algorithm {

public:
    void execute(vector<int> &num);

    virtual void sort(vector<int> &num) = 0;

    virtual int getNumber();

};


#endif //SORTING_ALGORITHM_H
