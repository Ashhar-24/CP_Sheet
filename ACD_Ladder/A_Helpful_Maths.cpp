#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin>>s;
    vector<int>v;

    for(int i=0; i<s.size(); i++){
        if(s[i]!='+'){
            int x = s[i]- '0';
            v.push_back(x);
        }
    }
    sort(v.begin(), v.end());

    string ans;
    for(int i=0; i<v.size(); i++){
        char c= v[i] + '0';
        ans.push_back(c);
        ans.push_back('+');
    }
    ans.pop_back();
    cout<<ans;
}	


int main() {
    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Question: https://codeforces.com/problemset/problem/339/A (800)
/*
    Just convert string into array, sort it and again convert it into string.
*/