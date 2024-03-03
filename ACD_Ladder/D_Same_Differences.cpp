#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    unordered_map<int,int> mp;

    for(int i=0; i<n; i++){
        cin>>v[i];
        mp[v[i]-i+1]++;
    }

    ll ct=0;
    for(auto x:mp){
        ll pair= x.second;
        ct+=(pair*(pair-1))/2;          //nC2 combinations
    }


    // vector<int>v(n);
    // for(int i=0; i<n; i++) cin>>v[i];

    // int ct=0;
    
    // TLE: O(n^2)
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(v[j]-v[i]==j-i) ct++;
    //     }
    // }


    // Rearranging: a[j]-j=a[i]-i


    cout<<ct<<endl;
}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Question: https://codeforces.com/contest/1520/problem/D (1200)
/*
    Approach: O(n)
    As doing using brute force gave TLE O(n^2), what we did id that first rearranging the terms so that it becomes 
    of the form a[i]-i. Now calculating the no of times this 'a[i]-i' occurs in the whole array so that at the
    end we can count the no of pairs we can form (nC2== (n*(n-1))/2). 

    So to implement this, we used an unordered_map which uses 'a[i]-i' as the key and the no of times it occured
    as it's value. Then we iterated through the map and calculated the no of pairs that can be formed using each
    key's value.
*/