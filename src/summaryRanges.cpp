/*
 * LeetCode Problem #228
 * https://leetcode.com/problems/summary-ranges/
 */

class Solution {
public:
    string range_to_str(const int start, const int end)
    {
        if (start == end) {
            return to_string(start);
        } else {
            return to_string(start) + "->" + to_string(end);
        }
    }
      
    pair<int, int> find_max_range(vector<int> nums, int i)
    {
        pair<int, int> max_range;
        max_range.first = nums[i];
    
        while ((i < nums.size()-1) && (nums[i]+1 == nums[i+1])) {
            ++i;
        }
        max_range.second = nums[i];
    
        return max_range;
    }
    
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ranges;
    
        for (size_t i = 0; i < nums.size(); i++) {
            if (i == nums.size()-1) {
                ranges.push_back(to_string(nums[i]));
                break;
            }
            pair<int, int> max_range = find_max_range(nums, i);
            i += (max_range.second - max_range.first);
            ranges.push_back(range_to_str(max_range.first, max_range.second));
        }
    
        return ranges;
    }
};
