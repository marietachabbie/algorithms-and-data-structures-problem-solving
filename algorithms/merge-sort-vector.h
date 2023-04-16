#ifndef merge_sort_vector_h
#define merge_sort_vector_h

class SolutionMergeVec {
public:
    vector<int> merge(vector<int>& leftVec, vector<int>& rightVec) {
        vector<int> result;
        size_t i = 0; size_t j = 0;
        
        while (i < leftVec.size() && j < rightVec.size()){
            if (leftVec[i] < rightVec[j]) {
                result.push_back(leftVec[i]);
                i++;
            } else {
                result.push_back(rightVec[j]);
                j++;
            }
        }
        
        result.insert(result.end(), leftVec.begin() + i, leftVec.end());
        result.insert(result.end(), rightVec.begin() + j, rightVec.end());
        return result;
    }
    vector<int> mergeSort(vector<int>& vec) {
        if (vec.size() < 2){
            return vec;
        }
        
        int mid = static_cast<int>(vec.size() / 2);
        vector<int> leftVec = { vec.begin(), vec.begin() + mid };
        vector<int> rightVec = { vec.begin() + mid, vec.end() };
        vector<int> sortedLeft = mergeSort(leftVec);
        vector<int> sortedRight = mergeSort(rightVec);
        return merge(sortedLeft, sortedRight);
    }

    void mergeSortOfVector (vector<int>& unsorted) {
        mergeSort(unsorted);
    }
};

#endif
