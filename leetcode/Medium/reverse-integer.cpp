// Problem: Reverse Integer
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/reverse-integer/
// Solved on: 2026-11-04T05:04:26.017Z

class Solution {
public:
    int reverse(int x) {
        int num = 0;

        while(x != 0){
            int d = x % 10;

            if(num > INT_MAX/10 || (num == INT_MAX/10 && d > 7))
                return 0;

            if(num < INT_MIN/10 || (num == INT_MIN/10 && d < -8))
                return 0;

            num = num * 10 + d;
            x /= 10;
        }

        return num;
    }
};