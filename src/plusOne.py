# LeetCode Problem #66
# https://oj.leetcode.com/problems/plus-one/

class Solution:
    def plusOne(self, digits):
        num = 0
        for i in range(len(digits)):
        	num += digits[i] * pow(10, (len(digits)-1-i))
        num += 1
        return [int(i) for i in str(num)]
