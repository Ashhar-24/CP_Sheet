#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin>>n>>k;
    vector<int> station(n);
    map<int, pair<int,int>>mp;              //takeaway 

    for(int i=0; i<n; i++){
        int ele; cin>>ele;

        if(mp.count(ele)==0){               // O(logn), searching for the element
            mp[ele].first=i;
            mp[ele].second=i;
        }
        else mp[ele].second=i;              // when duplicates are present, store the last index where it is present
    } 

    while(k--){
        int a, b; cin>>a>>b;

        if(mp.count(a)==0 or mp.count(b)==0 or mp[a].first>mp[b].second) cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
    }
    
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Question: https://codeforces.com/contest/1702/problem/C (1100)

/*
    Approach=> O(n*logn) 
        The question was pretty simple, just had to use 'Map' in order to solve. 
        For every station we just store it's initial index where it was found and the last index where it last appeared.
        Then simply check if the either the stations are present or not (or) is the value of first index of station 1st is
        greater than the value of second index of second index, ie whether the first station comes after the second
        station. If not, then we simply print "YES".
*/