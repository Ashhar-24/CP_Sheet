#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);

    map<int, int> mp;
    for(int i=0; i<n; i++){
        cin>>v[i];
        mp[v[i]]++;
    } 

    if(mp.size()>=3) cout<<"No"<<'\n';      // If there are more than 2 diifferent no.s, no such permutation is possible
    else{
        if(abs(mp.begin()->second- mp.rbegin()->second)<=1) cout<<"Yes"<<'\n';
        else cout<<"No"<<'\n';
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

// Question: https://codeforces.com/problemset/problem/1890/A
/*
    Approach=> O(nlogn)

    We made a map to store the no of times the element occured, ie the occurances. Now if there are more than
    2 different elements (key), there is no such permutation possible.
    Then we simply check that the no of times the elements occured differ by either 1 (for n: odd) or 0 (for n:even).

      
*/