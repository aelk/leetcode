/*
* LeetCode Problem #169
* https://oj.leetcode.com/problems/majority-element/
*/

// Note: "You may assume that the array is non-empty and the majority element always exists in the array."

class Solution {
public:
    int majorityElement(vector<int> &num) 
    {
        const int bound = floor(num.size()/2);
    	map<int, int> occurences;
        for (const auto &elem : num) {
            if (++occurences[elem] > bound) {
                return elem;
            }
        }
    }
};
