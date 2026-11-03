// Problem: Count the Digits That Divide a Number
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/count-the-digits-that-divide-a-number/
// Solved on: 2026-11-03T13:41:06.597Z

class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int n = num;
        while(n > 0){
            int cur = n % 10;
            if(num % cur == 0){
                count ++;
            }
            n /= 10;
        }
        return count;
    }
};