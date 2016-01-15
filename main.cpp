
#include<ctime>
#include <iostream>
#include "Algorithm.h"
#include "BubbleSort.h"
#include "SelectionSort.h"

Algorithm* getAlgorithm();

void initializeAlgorithms(vector<Algorithm*> &possibleAlgorithms);

using namespace std;



int main()
{
    std::vector<int> table (4,100);
    vector<Algorithm*> possibleAlgorithms;
    initializeAlgorithms(possibleAlgorithms);

    for(vector<Algorithm*>::iterator it = possibleAlgorithms.begin(); it != possibleAlgorithms.end(); ++it) {
        (*it)->sort(table);
    }






    return 0;
}

void initializeAlgorithms(vector<Algorithm*> &possibleAlgorithms) {
    BubbleSort bubbleSort;
    SelectionSort selectionSort;
    possibleAlgorithms.push_back(&bubbleSort);
    possibleAlgorithms.push_back(&selectionSort);
}

Algorithm* getAlgorithm(){
    BubbleSort sort;
    return &sort;
}

