// Problem: Valid Parentheses
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/valid-parentheses/
// Solved on: 2026-11-04T04:43:23.612Z

class Solution {
public:
    bool isValid(string s) {
        stack<char> c;
        for(auto i : s){
            if(i == '(' || i == '{' || i == '['){
                c.push(i);
            }
            else{
                if(c.empty()) return false;
                if(i == ')' && c.top() == '(' ||
                 i == '}' && c.top() == '{' || 
                 i == ']' && c.top() == '['){
                    c.pop();
                }
                else{
                    return false;
                }
            }
        }
        return c.empty();
    }
};