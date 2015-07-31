/*
 * LeetCode Problem #9
 * https://leetcode.com/problems/palindrome-number/
 */
class Solution {
public:
    const int nthDigit(int num, int num_digits, const int n)
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
    
    const int numDigits(int num)
    {
        int num_digits = -1;
        while (num != 0) {
            num /= 10;
            ++num_digits;
        }
        return num_digits;
    }
    
    bool isPalindrome(int x)
    {
        if (x < 0) {
            return false;
        }
    
        const int num_digits = numDigits(x);
    
        int start = 0, end = num_digits;
        while (start < end) {
            if (nthDigit(x, num_digits, start) != nthDigit(x, num_digits, end)) {
                return false;
            }
            ++start;
            --end;
        }
    
        return true;
    }
};
