// Problem: Palindrome Number
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/palindrome-number/
// Solved on: 2026-10-28T03:32:39.892Z

class Solution {
public:
    bool isPalindrome(int x) {
        bool as=x>0;
       long long sums =0; 
       int b=x;

       while(x!=0){
        int z=x%10; 
        sums=z+sums*10; 
        x=x/10; 

       }
       if(as){
        return sums==b;
       }
       else{
        return -sums==b;
       }

    
    }
};