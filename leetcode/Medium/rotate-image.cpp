// Problem: Rotate Image
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/rotate-image/
// Solved on: 2026-11-09T10:00:33.613Z

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                swap(matrix[j][i], matrix[i][j]);
            }
        }
        for(int i = 0; i < n; i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};