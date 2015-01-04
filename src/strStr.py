# LeetCode Problem #28
# https://oj.leetcode.com/problems/implement-strstr/

class Solution:
    def strStr(self, haystack, needle):
        if needle not in haystack:
            return -1
        if needle == "":
            return 0
        if needle in haystack:
            start = haystack.index(needle)
        return haystack.index(haystack[start:])
