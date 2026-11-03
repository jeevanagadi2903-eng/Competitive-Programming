// Problem: Count Odd Numbers in an Interval Range
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
// Solved on: 2026-11-03T13:34:28.720Z

class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;
        for(int i = low; i <= high; i++){
            if(i % 2 == 1){
                count++;
            }
        }
        return count;
    }
};