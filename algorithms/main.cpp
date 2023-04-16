#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace std::chrono;

#include "insertion-sort-vector.h"
#include "insertion-sort-list.h"
#include "merge-sort-vector.h"

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

    // merge sort
    SolutionMergeVec solutionMergeVec;

    auto start2 = high_resolution_clock::now();
    solutionMergeVec.mergeSortOfVector(inputVec2);
    auto stop2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(stop2 - start2);
    cout << "Sorting a vector took " << duration2.count() << " microseconds with merge sort." << endl;

    return 0;
}
