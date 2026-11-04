// Problem: Palindrome Number
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/palindrome-number/
// Solved on: 2026-11-04T05:11:36.457Z

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        int num = x;
        long long int n = 0;
        while(x > 0){
            n += x % 10;
            n *= 10;
            x /= 10;
        }
        return (num == n/10);
    }
};