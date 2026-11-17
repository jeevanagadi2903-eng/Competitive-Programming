// Problem: A - Simple Palindrome
// Platform: codeforces
// Contest: Contest-2005
// Rating/Difficulty: 900
// Language: C++23 (GCC 14-64, msys2)
// Verdict: Accepted
// URL: https://codeforces.com/contest/2005/submission/398955894
// Solved on: 2026-11-17T15:09:40.089Z

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    while(a--){
        int b;
        cin >> b;
        string c = "aeiou";
        int cnt[5] = {};
        for(int i = 0; i < b; i++){
            cnt[i%5]++;
        }
        for(int i = 0; i < 5; i++){
            while(cnt[i]--){
                cout << c[i];
            }
        }
        cout << endl;
    }
}