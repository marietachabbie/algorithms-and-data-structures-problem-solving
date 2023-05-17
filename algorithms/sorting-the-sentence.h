/* The problem in leetcode:
https://leetcode.com/problems/sorting-the-sentence */

#ifndef sorting_the_sentence_h
#define sorting_the_sentence_h

class Solution {
private:
string join(vector<string> ordered, char delim) {
    string result = "";
    for (int i = 1; i < ordered.size(); i++) {
        result += ordered[i];
        result += delim;
    }

    result.pop_back();
    return result;
}

public:
    string sortSentence(string str) {
        string word = "";
        vector<string> splitted;
        int size = 0;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] != ' ') {
                word += str[i];
            } else if (word.size() > 0) {
                splitted.push_back(word);
                size++;
                word = "";
            }
        }
        splitted.push_back(word);

        vector<string> ordered(size + 2);
        for (int i = 0; i < splitted.size(); i++) {
            int idx = splitted[i].back() - '0';
            splitted[i].pop_back();
            ordered[idx] = splitted[i];
        }

        return join(ordered, ' ');
    }
};

#endif
