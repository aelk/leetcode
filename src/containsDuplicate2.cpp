/*
 * LeetCode Problem #219
 * https://leetcode.com/problems/contains-duplicate-ii/
 */

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if (nums.empty()) {
            return false;
        }
        
    	map<int, vector<int>> num_to_index;
    	for (size_t i = 0; i != nums.size(); ++i) {
    		num_to_index[nums[i]].push_back(i);
    	}
    
    	sort(nums.begin(), nums.end());
    
    	for (size_t i = 0; i != nums.size()-1; ++i) {
    		if (nums[i] == nums[i+1]) {
    			auto indices = num_to_index[nums[i]];
    			for (size_t j = 0; j != indices.size()-1; ++j) {
    				if (abs(indices[j] - indices[j+1]) <= k) {
    					return true;
    				}
    			}
    		}
    	}
    	return false;
    }
};
