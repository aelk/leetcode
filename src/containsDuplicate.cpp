/*
 * LeetCode Problem #217
 * https://leetcode.com/problems/contains-duplicate/
 */
 
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, bool> occurred;
        for (auto num : nums) {
            if (occurred[num]) {
                return true;
            }
            occurred[num] = true;
        }
        return false;
    }
};
 
