#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    int arr[n][3];

    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++) cin>>arr[i][j];
    }

    int ans=0;
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=0; j<3; j++)sum+=arr[i][j];

        if(sum>=2)ans++;
    }

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

// Question: https://codeforces.com/problemset/problem/231/A (800)