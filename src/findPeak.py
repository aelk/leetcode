# LeetCode Problem #162
# https://oj.leetcode.com/problems/find-peak-element/

class Solution:
    def findPeakElement(self, num):
    	if len(num) <= 1:
    		return 0
    
    	lo, hi = 0, len(num)
    	while lo < hi:
    		mid = (lo+hi)//2
    		if mid+1 < len(num) and num[mid] < num[mid+1]:
    			lo = mid+1
    		elif num[mid] < num[mid-1]:
    			hi = mid
    		else:
    			return mid
