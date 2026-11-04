// Problem: Search in Rotated Sorted Array
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/search-in-rotated-sorted-array/
// Solved on: 2026-11-04T09:45:09.699Z

class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                return i;
            }
        }
        return -1;
    }
}; 