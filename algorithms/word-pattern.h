/* The problem in leetcode:
https://leetcode.com/problems/word-pattern */

#ifndef word_pattern_h
#define word_pattern_h

#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

class Solution {
private:
    vector<string> splitStr(string& str) {
        string word = "";
        vector<string> result;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == ' ') {
                result.push_back(word);
                word = "";
            } else {
                word += str[i];
            }
        }
        
        if (word.size() > 0) {
            result.push_back(word);
        }

        return result;
    }

    map<char, int> embeddings(string& str) {
        map<char, int> embedding;
        for (int i = 0; i < str.size(); i++) {
            if (embedding.find(str[i]) == embedding.end()) {
                embedding[str[i]] = i;
            }
        }

        return embedding;
    }

    map<string, int> embeddings(vector<string>& strVec) {
        map<string, int> embedding;
        for (int i = 0; i < strVec.size(); i++) {
            if (embedding.find(strVec[i]) == embedding.end()) {
                embedding[strVec[i]] = i;
            }
        }

        return embedding;
    }

    vector<int> encodeStr(vector<string>& strVec, map<string, int>& embedding) {
        vector<int> result;
        for (auto& word : strVec) {
            result.push_back(embedding[word]);
        }

        return result;
    }
    
    vector<int> encodeStr(string& pattern, map<char, int>& embedding) {
        vector<int> result;
        for (auto& letter : pattern) {
            result.push_back(embedding[letter]);
        }

        return result;
    }

    bool doesFollow(vector<int>& vec1, vector<int>& vec2) {
        if (vec1.size() != vec2.size()) { return false; }

        for (int i = 0; i < vec1.size(); i++) {
            if (vec1[i] != vec2[i]) {
                return false;
            }
        }

        return true;
    }

public:
    bool wordPattern(string pattern, string str) {
        vector<string> strVec = splitStr(str);
        map<char, int> patternEmb = embeddings(pattern);
        map<string, int> strEmb = embeddings(strVec);

        vector<int> encodedPattern = encodeStr(pattern, patternEmb);
        vector<int> encodedStr = encodeStr(strVec, strEmb);
        return doesFollow(encodedPattern, encodedStr);
    }
};

#endif
