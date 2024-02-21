#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector <int> v(m);
    for(int i=0; i<m; i++) cin>>v[i];

    sort(v.begin(), v.end());
    int ans=INT_MAX;

    for(int i=0; i<=m-n; i++){
        ans=min(ans, v[i+n-1]-v[i]);
    }

    cout<<ans<<'\n';
}	


int main() {
    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Quesn: https://codeforces.com/problemset/problem/337/A
/*
    Approach: Sort the array and then traverse it from i=0 to i=m-n, as we got to have n items and check the 
    difference b/w the first and the last element in that selected sub-array of n elements. We store this difference
    and keep on updating it if we find any smaller difference.

*/