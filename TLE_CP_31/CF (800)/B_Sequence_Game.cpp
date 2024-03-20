#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> ans;
    ans.push_back(v[0]);

    for(int i=1; i<n; i++){
        if(v[i]<v[i-1]){
            ans.push_back(v[i]);
            ans.push_back(v[i]);
        }
        else {
            ans.push_back(v[i]);
        }
    }

    cout<<ans.size()<<'\n';
    for(int a: ans) cout<<a<<" ";
    cout<<'\n';
}


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Question: https://codeforces.com/problemset/problem/1862/B