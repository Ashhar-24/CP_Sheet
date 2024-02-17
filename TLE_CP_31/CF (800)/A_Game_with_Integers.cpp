#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        /*
            Ques: https://codeforces.com/problemset/problem/1899/A
            Approach=> For a player to win, the no must be divisble by 3 after he has performed +-1 to the no he gets.
            As player 'First' starts the game, and has a no that is already divisible by 3, then he must do +-1 at 
            his turn which makes him loose and he cannot get a no which is divisible by 3 and played 'Second' wins.
            Similarly if 'First' gets a no. which is not divisble by 3, then he can do +-1 to get a no. divisible by 3
            and therefore he wins.
            [Question lang is bit complex, the test case given makes it bit easy to understand]
        */

        if(n%3!=0) cout<<"First"<<'\n';
        else cout<<"Second"<<'\n';
    }
}