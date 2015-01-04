/*
 * LeetCode Problem #13
 * https://oj.leetcode.com/problems/roman-to-integer/
 */

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> romans = 
        { 
            { 'I', 1 }, { 'V', 5 }, { 'X', 10 }, 
            { 'L', 50 }, { 'C', 100 }, { 'D', 500 }, { 'M', 1000 } 
        };
        int result = 0;
        
        for (int i = 0; i != s.size(); ++i) {
            if (s[i + 1] && romans[s[i]] < romans[s[i + 1]]) {
                result += romans[s[i + 1]] - romans[s[i]];
                ++i; // skip the next numeral
            } else {
                result += romans[s[i]];
            }
        }
        
        return result;
    }
};