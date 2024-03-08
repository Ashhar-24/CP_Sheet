#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n; cin>>n;
    if(n%2!=0) cout<<0;
    else{
        if(n%4==0){
            cout<<(n/4)-1;
        }
        else cout<<(n/4);
    }
}	


int main() {
    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Question: https://codeforces.com/contest/610/problem/A (Combinatorics)
/*
    Approach:
    For odd nos, it is not possible to make rectangles. For even nos, if it is divisble by 4 then a sqaure is possible
    and if not then there will be total n/4 ways.
*/