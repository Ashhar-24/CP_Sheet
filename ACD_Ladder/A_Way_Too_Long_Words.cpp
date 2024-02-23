#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin>>s;
    if(s.size()<=10) cout<<s<<'\n';
    else cout<<s[0]<<s.size()-2<<s[s.size()-1]<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Question: https://codeforces.com/problemset/problem/71/A (800)

/*
    Approach: O(n)
        Simple implementation of string
*/