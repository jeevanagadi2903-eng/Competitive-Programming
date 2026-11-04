// Problem: Add Digits
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/add-digits/
// Solved on: 2026-11-04T04:05:43.627Z

class Solution {
public:
    int addDigits(int num) {
        while(num > 9){
            int cur = 0;
            while(num > 0){
                cur += num % 10;
                num /= 10;
            }
            num = cur;
        }
        return num;
    }
};