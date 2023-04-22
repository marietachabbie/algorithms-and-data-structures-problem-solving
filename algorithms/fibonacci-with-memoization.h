/* The problem in leetcode:
https://leetcode.com/problems/fibonacci-number */

#ifndef fibonacci_with_memoization_h
#define fibonacci_with_memoization_h

class Solution {
public:
    int fibWithMemo(int n, map<int, int>& memo) {
        if(n <= 2) {
            return 1;
        }

        if (memo.find(n) != memo.end()) {
            return memo[n];
        }

        memo[n] = fibWithMemo(n - 1, memo) + fibWithMemo(n - 2, memo);
        return memo[n];
    }

    int fib(int n) {
        if (n == 0) {
            return 0;
        }

        map<int, int> memo;
        return fibWithMemo(n, memo);
    }
};

#endif
