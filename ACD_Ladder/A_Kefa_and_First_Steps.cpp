#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    

    int ans= INT_MIN;
    // for(int i=0; i<n; i++){
    //     int j=i+1;
    //     int count=1;
    //     while(v[j]>=v[j-1] and j<n){
    //         count++;
    //         j++;
    //     }
    //     ans=max(ans,count);
    // }

    int count=1;
    for(int i=1; i<n; i++){
        if(v[i]>=v[i-1]) count++;
        else count=1;                           // Takeaway

        ans=max(ans,count);
    }

    if (n==1) ans=count;    // doing it explicitily because for n=1, it won't enter the for-loop
    cout<<ans<<'\n';    

}


int main() {
    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Question: https://codeforces.com/contest/580/problem/A (900)

/*
    Approach=> O(n)
    As n<=1e5, doing it using brute force ie, in O(n^2) gave TLE.
    So to optimize, what we simply did is that we traverse the given array and
    for greater or equal element we increase value of count and if found smaller
    asign value 1 back to count. To store the max value of count, we simply have
    a variable which stores the max value of count for each iteration.

*/