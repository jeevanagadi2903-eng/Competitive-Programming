// Problem: Find Numbers with Even Number of Digits
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
// Solved on: 2026-11-03T13:50:13.211Z

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(auto i : nums){
            int inner_count = 0;
            while(i > 0){
                i /= 10;
                inner_count ++;
            }
            if(inner_count % 2 == 0){
                count ++;
            }
        }
        return count;
    }
};