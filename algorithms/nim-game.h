/* The problem in leetcode:
https://leetcode.com/problems/nim-game */

#ifndef nim_game_h
#define nim_game_h

class Solution {
public:
    bool canWinNim(int n) {
        return n % 4 > 0;
    }
};

#endif
