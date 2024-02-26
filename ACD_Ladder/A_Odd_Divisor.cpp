#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n; cin>>n;
    bool ans=0;

    if(n>1 and n%2!=0) ans=1;
    else{
        while(n>1){
            if(n%2!=0){
                ans=1;
                break;
            }
            else n/=2;
        }
    }

    if(ans) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Question: https://codeforces.com/contest/1475/problem/A (900)
/*
    Approach=> O(log n)
        As the constraint given is 1e14 so we must do it in O(logn) or O(1).
        If we carefully observe, there can be 4 different combinations for a given no.
            odd = Odd * Odd
            Even= even * Even
            Even= Even * Odd
        ie, if a given no. is odd then it must have a odd factor, else we have to check
        whether upon successive division by 2, at any moment we get 1 as remainder because
        getting 1 will eventually tell that it is an odd no. and it must have a odd factor.

*/