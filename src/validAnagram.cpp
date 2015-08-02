/*
 * LeetCode Problem #242
 * https://leetcode.com/problems/valid-anagram/
 */

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        
        int occurrences[256] = {0};
        
        for (auto c : s) {
            ++occurrences[c];
        }

        for (auto c : t) {
            --occurrences[c];
        }
        
        for (size_t i = 0; i != 256; ++i) {
            if (occurrences[i] != 0) {
                return false;
            }
        }
        
        return true;
    }
};
