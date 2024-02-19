#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;

    bool present=0;
    for(int i=0; i<s.length();i++){
        if(s[i]=='H' or s[i]=='Q' or s[i]=='9'){
            present=1;
            break;
        }
    }

    if(present) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

    // Quesn: https://codeforces.com/contest/133/problem/A
}