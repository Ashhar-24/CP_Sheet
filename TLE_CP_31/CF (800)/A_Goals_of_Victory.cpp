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