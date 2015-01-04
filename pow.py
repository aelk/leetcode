# LeetCode Problem #50
# https://oj.leetcode.com/problems/powx-n/

class Solution:
	# See wikipedia.org/wiki/Exponentiation_by_squaring
	# for details on the technique used here.
	def pow(self, x, n):
		if n < 0: return pow(1.0/x, n * -1)
		elif n == 0 or x == 1.0: return 1
		elif n == 1: return x
		elif n % 2 == 0: return pow(x * x, n/2)
		elif n % 2 != 0: return x * pow(x * x, (n-1)/2)