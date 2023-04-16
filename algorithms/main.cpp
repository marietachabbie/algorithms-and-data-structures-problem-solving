#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace std::chrono;

#include "merge-sort-vector.h"
#include "heap-sort-array.h"

vector<int> createVector () {
    return {};
}

int main(int argc, const char * argv[]) {
    vector<int> inputVec1 = createVector();
    int inputArr2[10000]; // inputVec1;
    copy(inputVec1.begin(), inputVec1.end(), inputArr2);
    int arrSize = sizeof(inputArr2) / sizeof(inputArr2[0]);

    // merge sort
    SolutionMergeVec solutionMergeVec;
    auto start1 = high_resolution_clock::now();
    solutionMergeVec.mergeSortOfVector(inputVec1);
    auto stop1 = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(stop1 - start1);
    cout << "Sorting a vector took " << duration1.count() << " microseconds with merge sort." << endl;
    
    // heap sort
    SolutionHeapSort solutionHeapSort;
    auto start2 = high_resolution_clock::now();
    solutionHeapSort.heapSortArray(inputArr2, arrSize);
    auto stop2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(stop2 - start2);
    cout << "Sorting a vector took " << duration2.count() << " microseconds with heap sort." << endl;

    return 0;
}
