/* The problem in leetcode:
https://leetcode.com/problems/number-complement */

#ifndef number_complement_h
#define number_complement_h

class Solution {
private:
    vector<int> numToFlippedBits(int num) {
        vector<int> bits;
        while (num > 0) {
            bits.insert(bits.begin(), num % 2 == 1 ? 0 : 1);
            num /= 2;
        }

        bits.insert(bits.begin(), 0);
        return bits;
    }

    int bitsToNum(vector<int>& bits) {
        int i = 0;
        while(i < bits.size() && bits[i] == 0) {
            i++;
        }

        vector<int> powersOfTwo;
        int power = bits.size() - 1 - i;
        for(int j = i; j < bits.size(); j++) {
            powersOfTwo.push_back(pow(2, power));
            power--;
        }

        int k = 0;
        for(int j = i; j < bits.size(); j++) {
            if (bits[j] == 0) {
                powersOfTwo[k] = 0;
            }
            k++;
        }

        int sum = 0;
        for (auto& num : powersOfTwo) {
            sum += num;
        }

        return sum;
    }
public:
    int findComplement(int num) {
        vector<int> flipped = numToFlippedBits(num);
        return bitsToNum(flipped);
    }
};

#endif
