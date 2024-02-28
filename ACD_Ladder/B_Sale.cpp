#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m; cin>>n>>m;
    vector <int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());
    int sum=0, i=0;
    while(m-- and i<n){
        if(v[i]<0) sum+=abs(v[i]);
        i++;
    }
    cout<<sum<<'\n';
}	


int main() {
    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Question: https://codeforces.com/contest/34/problem/B (900)
/*
    Approach: O(n)
    As we just needed to find the amount of money he can earn with provided max no of laptops he can carry/busy
    we first sorted the array because the max amount he can earn can only be found if the smallest negative no.
    (ie largest in magnitude) is added first followed by others.
*/