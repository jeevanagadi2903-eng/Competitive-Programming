// Problem: A - Three Numbers on the Blackboard
// Platform: codeforces
// Contest: Contest-2256
// Rating/Difficulty: 800
// Language: C++23 (GCC 14-64, msys2)
// Verdict: Accepted
// URL: https://codeforces.com/contest/2256/submission/389292702
// Solved on: 2026-09-03T17:15:31.167Z

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        vector<int>b(3);
        for(int j = 0; j < 3; j++){
            cin >> b[j];
        }
        sort(b.begin(), b.end());
        if(b[2] < b[0] + b[1]){
            cout << b[2] - b[0] << endl;
        }else{
            cout << b[1] << endl;
        }
    }
}  