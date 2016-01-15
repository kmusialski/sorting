#include<ctime>
#include <iostream>
#include "Collector.h"


using namespace std;


int main() {

    Collector *collector = new Collector();
    cout << collector->getResult();


    return 0;
}


