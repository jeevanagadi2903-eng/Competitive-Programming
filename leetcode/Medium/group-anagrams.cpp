// Problem: Group Anagrams
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/group-anagrams/
// Solved on: 2026-11-08T09:01:32.703Z

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> a = strs;
        for(int i = 0; i < strs.size(); i++){
            sort(strs[i].begin(),strs[i].end());
        }
        set<string> c;
        for(auto i : strs){
            c.insert(i);
        }
        vector<vector<string>> ans;
        vector<string> temp = {};
        for(auto i : c){
            temp = {};
            for(int j = 0; j < strs.size(); j++){
                if(i == strs[j]){
                    temp.push_back(a[j]);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};