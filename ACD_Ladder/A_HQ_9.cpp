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

}

// Quesn: https://codeforces.com/contest/133/problem/A
/*
    Question language is bit complex, but with simple reading and observation
    it is clear that if the input string has either of word 'H','Q' or '9', it
    will print an output else not.
*/