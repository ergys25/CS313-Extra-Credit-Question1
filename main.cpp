#include <iostream>
#include <time.h>
#include <chrono>
#include "TST.h"
#include "BST.h"

using namespace std::chrono;

int main() {
    int sampleArray[200000];
    TST t, *root = nullptr;
    srand(time(NULL));
    int Number = 0;
    Number = std::rand();
    root = t.insert(root, Number);
    BST b, *rooot = nullptr;
    rooot = b.insert(rooot, Number);

    for (int i = 1; i < 200000; i++) { // populate the tree

        Number = std::rand();

        t.insert(root, Number); // insert to TST
        b.insert(rooot, Number);// insert to BST
        sampleArray[i] = Number; // store the node names here so we can pick on at random to search at the end
    }





    auto start = high_resolution_clock::now(); //start time to measure performance execution

    std::cout << "Found At : |" << (t.search(root, sampleArray[180000])) << "|";
    auto stop = high_resolution_clock::now(); //end time of execution performance measurement
    auto duration = duration_cast<microseconds>(stop - start);

    std::cout << " Time taken by Ternary search tree : "
              << duration.count() / 1000.0 << " Milliseconds" << std::endl;


    start = high_resolution_clock::now(); //start time to measure performance execution


    std::cout << "Found At : |" << (b.search(rooot, sampleArray[180000])) << "|";


    stop = high_resolution_clock::now(); //end time of execution performance measurement
    duration = duration_cast<microseconds>(stop - start);

    std::cout << " Time taken by Binary search  tree : "
              << duration.count() / 1000.0 << " Milliseconds" << std::endl;
}
