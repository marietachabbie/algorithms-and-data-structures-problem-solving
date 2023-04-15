#ifndef insertion_sort_vector_h
#define insertion_sort_vector_h

#include <iostream>
#include <vector>

class SolutionVec {
public:
    void insertionSortOfVector (std::vector<int>& vec) {
        for (std::size_t i = 1; i < vec.size(); i++) {
            for (std::size_t j = i; j > 0; j--) {
                if (vec[j] < vec[j - 1]) {
                    std::swap(vec[j], vec[j - 1]);
                }
            }
        }
    }
};

#endif
