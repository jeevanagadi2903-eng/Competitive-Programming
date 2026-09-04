// Problem: Construct Uniform Parity Array II
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/construct-uniform-parity-array-ii/
// Solved on: 2026-09-04T05:16:00.525Z

class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(),nums1.end());
        int even_count = 0;
        for(auto i : nums1){
            if(i % 2 == 0){
                even_count++;
            }
        }
        if(even_count == nums1.size()){
            return true;
        }
        if(nums1[0] % 2 == 1){
            return true;
        }else{
            return false;
        }
    }
};