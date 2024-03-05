#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin>>s;

    bool istrue=0;

    int ans=INT_MIN;

    int ctv=1;
    for(int i=0; i<s.length()-1; i++){
        if(s[i]==s[i+1]){
            ctv++;
        }
        else{
            ctv=1;
        }
        ans=max(ans, ctv);
    }
    // cout<<ans<<" ";

    if(ans>=7) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}	


int main() {
    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Question: https://codeforces.com/problemset/problem/96/A (900)
/*
    Approach=> Simply count the no of same adjacent no.s and store it in a max variable. As soon as a new pair comes
            switch back the value of ct to 1.
*/