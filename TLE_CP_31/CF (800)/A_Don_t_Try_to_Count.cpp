#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,m; cin>>n>>m;
    string x,s; cin>>x>>s;
    int ct=0;

    // while(x.size()<s.size()){
    //     x+=x;
    //     ct++;
    // }

    // bool find=x.find(s) != string::npos;;
    // if(find==0){
    //     x+=x; ct++;
    //     find=x.find(s) != string::npos;;
    // }

    // find ? cout<<ct<<'\n' : cout<<-1<<'\n';

    // bool find;
    // while(x.size()<=25){
    //     find=x.find(s) != string::npos;;
    //     if(find) break;
    //     else{
    //         x+=x;
    //         ct++;
    //     }
    //     // cout<<ct<<" ";
    // }
    // find=x.find(s) != string::npos;;
    // (find)? cout<<ct<<'\n': cout<<-1<<'\n';

    bool find;
    while(ct<6){
        find=x.find(s) != string::npos;;
        if(find) break;
        else{
            x+=x;
            ct++;
        }
    }
    (find)? cout<<ct<<'\n': cout<<-1<<'\n';
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Question: https://codeforces.com/problemset/problem/1881/A
/*
    Approach:
        The logic behind looping till ct<6 is that it the maximun possible times we can convert x into a bigger string.
        This is so, because intially n*m<=25, ie, if x.size() or n==1 and this would imply m or s.size()==25.
        So now for s to be present in x, x.size()>=s.size() and for that see the change of x's length:
        1->2->4->8->16->32, ie it took 5 iterations to fit the condition. 

        For checking s to be present in x, we used find() method of string and string::npos; is a static member 
        constant value with the greatest possible value for a string's size type.
*/