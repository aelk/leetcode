# LeetCode Problem #172
# https://oj.leetcode.com/problems/factorial-trailing-zeroes/

def chooseK(n):
	if n < 5:
		return 0
	for k in range(n):
		if 5**(k+1) > n:
			return k
			
class Solution:
    def trailingZeroes(self, n):
    	numZeroes = 0
    	k = chooseK(n)
    	for i in range(1, k+1):
    		numZeroes += math.floor(n/(5**i))
    	return int(numZeroes)
