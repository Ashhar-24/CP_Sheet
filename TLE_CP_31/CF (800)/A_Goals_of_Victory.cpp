#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n-1);
    for(int i=0; i<n-1; i++) cin>>v[i];

    int pos=0, neg=0;
    for(auto x: v){
        if(x<0) neg+= abs(x);
        else pos+=x;
    }

    cout<<neg-pos<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Question: https://codeforces.com/problemset/problem/1877/A (800)
/*
    Approach: O(n)
    Notice that each goal increases the efficiency of the team that scores by 1. 
    But it also simultaneously decreases the efficiency of the opposite team by 1. This means, 
    if we maintain the sum of efficiency for all teams, each goal does not change the sum. 
    Therefore, the sum must be 0.
*/