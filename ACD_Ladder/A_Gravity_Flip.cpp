#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());
    for(int i=0; i<n; i++) cout<<v[i]<<" ";
}	


int main() {
    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Quesn: https://codeforces.com/contest/405/problem/A
/*
    Appproach: Simple observation of the image tells that we just need to sort the array 
    and it would give our desired answer.
*/