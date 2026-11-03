// Problem: Smallest Even Multiple
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/smallest-even-multiple/
// Solved on: 2026-11-03T13:45:08.871Z

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n % 2 == 0){
            return n;
        }else{
            return n * 2;
        }
    }
};