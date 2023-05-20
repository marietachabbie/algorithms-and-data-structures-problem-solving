/* The problem in leetcode:
https://leetcode.com/problems/isomorphic-strings */

#ifndef isomorphic_strings_h
#define isomorphic_strings_h

class Solution {
private:
    map<char, int> embeddings(string& str) {
        map<char, int> emb;
        int i = 0;
        for (auto& ch : str) {
            if (emb.find(ch) == emb.end()) {
                emb[ch] = i;
                i++;
            }
        }

        return emb;
    }

    string makePattern (string& str, map<char, int>& mapp) {
        string pattern = "";
        for (auto& ch : str) {
            pattern += mapp[ch] + '0';
        }

        return pattern;
    }

public:
    bool isIsomorphic(string s, string t) {
        map<char, int> sMap = embeddings(s);
        map<char, int> tMap = embeddings(t);

        string sPattern = makePattern(s, sMap);
        string tPattern = makePattern(t, tMap);

        return sPattern == tPattern;
    }
};

#endif
