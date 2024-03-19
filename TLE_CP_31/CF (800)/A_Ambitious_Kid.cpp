#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int mini=INT_MAX;
    for(int i=0; i<n; i++){
        mini=min(mini, abs(v[i]));
    }
    cout<<mini;
}	


int main() {
    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Question: https://codeforces.com/problemset/problem/1866/A (800)
/*
    Approach: O(n)
        Just calculate the no. which is most closest to zero.
*/