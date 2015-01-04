# LeetCode Problem #34
# https://oj.leetcode.com/problems/search-for-a-range/

def binSearch(A, key, low = 0, high = None):
    if len(A) == 0:
        return -1
    elif len(A) == 1:
        return 0 if (A[0] == key) else -1
        
    if high is None:
        high = len(A) - 1
    pos = bisect.bisect_left(A, key, low, high)
    
    return pos if (A[pos] == key) else -1

class Solution:
    def searchRange(self, A, target):
        firstIndex = binSearch(A, target)
        if firstIndex == -1:
            return [-1, -1]
    
        if target not in A[firstIndex+1:]:
            return [firstIndex, firstIndex]
        else:
            lastIndex = (len(A) - 1) - A[:firstIndex:-1].index(target)
            return [firstIndex, lastIndex]
