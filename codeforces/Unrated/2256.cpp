// Problem: Three Numbers on the Blackboard
// Platform: codeforces
// Language: C++17
// Verdict: Accepted
// URL: https://codeforces.com/contest/2256/my
// Solved on: 2026-09-03T17:17:25.595Z

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