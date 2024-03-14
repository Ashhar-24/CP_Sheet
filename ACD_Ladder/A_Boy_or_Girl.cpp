#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin>>s;

    set<char>st (s.begin(), s.end());

    if(st.size()%2==0) cout<<"CHAT WITH HER!"<<'\n';
    else cout<<"IGNORE HIM!"<<'\n';
    
}	


int main() {
    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Question: https://codeforces.com/problemset/problem/236/A (800)