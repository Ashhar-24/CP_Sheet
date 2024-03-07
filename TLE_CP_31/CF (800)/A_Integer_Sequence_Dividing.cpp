#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    ll sum= (n*(n+1))/2;
    if(sum%2==0) cout<<0<<'\n';
    else cout<<1<<'\n';
}	


int main() {
    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

//Question: https://codeforces.com/contest/1102/problem/A
/*
    Approach:
        By observation it is seen that if sum % 2 ==0, then the difference is 0 as ther will exist n(n+1)2 can be
        equally divided into A and B. Else ceil(n(n+1)/2*2) and (n(n+1))/2*2 will be divided resulting in 1 as 
        difference.
*/