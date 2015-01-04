# LeetCode Problem #58
# https://oj.leetcode.com/problems/length-of-last-word/

class Solution:
    def lengthOfLastWord(self, s):
        count = 0
    	for char in reversed(s):
    		if count > 0 and char == ' ': 
    			return count
    		elif char != ' ':
    			count += 1
    	return count
