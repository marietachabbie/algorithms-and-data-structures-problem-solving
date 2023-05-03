/* The problem in leetcode:
https://leetcode.com/problems/first-bad-version */

#ifndef first_bad_version_h
#define first_bad_version_h

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int binarySearch(int start, int end, int& found) {
        int mid = start + ((end - start) / 2);
        if (start == found) {
            return found;
        }
        if (isBadVersion(mid)) {
            found = mid;
            return binarySearch(start, mid, found);
        }

        return binarySearch(mid + 1, end, found);
    }

    int firstBadVersion(int n) {
        int found = 0;
        return binarySearch(1, n, found);
    }
};

#endif
