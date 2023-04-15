#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace std::chrono;

#include "insertion-sort-vector.h"
#include "insertion-sort-list.h"

vector<int> createVector () {
    return {};
}

int main(int argc, const char * argv[]) {
    // solution for vector
    SolutionVec solutionVec;
    vector<int> inputVec1 = createVector();
    vector<int> inputVec2 = inputVec1;

    auto start1 = high_resolution_clock::now();
    solutionVec.insertionSortOfVector(inputVec2);
    auto stop1 = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(stop1 - start1);
    cout << "Sorting a vector took " << duration1.count() << " microseconds with insertion sort." << endl;

    // solution for doubly linked list
    SolutionList solutionList;
    auto newLL = solutionList.createDLList(inputVec1);

    auto start2 = high_resolution_clock::now();
    solutionList.insertionSortOfList(newLL);
    auto stop2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(stop2 - start2);
    cout << "Sorting a doubly linked list took " << duration2.count() << " microseconds with insertion sort." << endl;

    return 0;
}
