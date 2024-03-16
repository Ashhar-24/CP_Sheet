#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin>>n>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    bool ispre=0;
    for(int x: v){
        if(x==k){
            ispre=1;
            break;
        }
    }

    if(ispre) cout<<"YES"<<'\n';
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

// Question: https://codeforces.com/problemset/problem/1878/A (800)

/*
    As the the length of the sub-segment can be 1 also, hence there will always be a subsegment possible
    if the number appears in the array.
*/