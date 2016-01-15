//
// Created by brekol on 15.01.16.
//

#include <iostream>
#include <numeric>
#include "Collector.h"
#include "InsertionSort.h"
#include "SelectionSort.h"
#include "BubbleSort.h"

void initializeAlgorithms(vector<Algorithm *> &possibleAlgorithms);

int Collector::getResult() {

    for (vector<Algorithm *>::iterator it = possibleAlgorithms.begin(); it != possibleAlgorithms.end(); ++it) {
        intTable.push_back((*it)->getNumber());
    }
    return std::accumulate(intTable.begin(), intTable.end(), 0);
}

Collector::Collector() {
    initializeAlgorithms(possibleAlgorithms);
}

void initializeAlgorithms(vector<Algorithm *> &possibleAlgorithms) {
    BubbleSort *bubbleSort = new BubbleSort();
    SelectionSort *selectionSort = new SelectionSort();
    InsertionSort *insertionSort = new InsertionSort();
    possibleAlgorithms.push_back(bubbleSort);
    possibleAlgorithms.push_back(selectionSort);
    possibleAlgorithms.push_back(insertionSort);
}
