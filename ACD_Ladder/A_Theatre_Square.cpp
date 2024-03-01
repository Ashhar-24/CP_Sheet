#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, k; cin>>n>>m>>k;

    ll ct=0;

    ll reqn= ceil(n/float(k));
    ll reqm= ceil(m/float(k));
    // cout<<ct;
    ct=reqn*reqm;
    cout<<ct;

}	


int main() {
    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Question: https://codeforces.com/contest/1/problem/A (1000)
/*
    Approach=> O(1)
        As it is given in the question that we cannot cut the marble pieces ie, have to use the whole k*k sized marble,
        so just divided and taking ceil() ensured the above condition and used to store it in long long variable.
*/