/*
 * LeetCode Problem #9
 * https://leetcode.com/problems/palindrome-number/
 */

class Solution {
public:
    const int getNthDigit(int num, int num_digits, const int n)
    {
        if (n > num_digits) {
            return -1;
        }
        
        while (n < num_digits) {
            num /= 10;
            --num_digits;
        }
    
        return num % 10;
    }
    
    bool isPalindrome(int x)
    {
        if (x < 0) {
            return false;
        }
    
        int x_copy = x;
        int num_digits = -1;
    
        while (x_copy != 0) {
            x_copy /= 10;
            ++num_digits;
        }
    
        int start = 0, end = num_digits;
        while (start < end) {
            if (getNthDigit(x, num_digits, start) != getNthDigit(x, num_digits, end)) {
                return false;
            }
            ++start;
            --end;
        }
    
        return true;
    }
};
