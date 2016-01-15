
#include<ctime>
#include <iostream>
#include "Algorithm.h"
#include "BubbleSort.h"
#include "SelectionSort.h"


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
    BubbleSort *bubbleSort = new BubbleSort();
    SelectionSort *selectionSort = new SelectionSort();
    possibleAlgorithms.push_back(bubbleSort);
    possibleAlgorithms.push_back(selectionSort);
}
