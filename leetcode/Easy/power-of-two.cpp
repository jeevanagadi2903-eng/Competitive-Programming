// Problem: Power of Two
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/power-of-two/
// Solved on: 2026-11-03T14:02:56.610Z

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;

        while(n != 1){
            if(n % 2 != 0){
                return false;
            }
            n /= 2;
        }

        return true;
    }
};