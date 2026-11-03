// Problem: Subtract the Product and Sum of Digits of an Integer
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
// Solved on: 2026-11-03T13:37:30.230Z

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        while(n > 0){
            product *= n % 10;
            sum += n % 10;
            n /= 10;
        }
        return product - sum;
    }
};