#include <bits/stdc++.h>
using namespace std;

void solve(){
    int arr[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++) cin>>arr[i][j];
    }

    int moves=0;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(arr[i][j]==1){
                moves+= abs(2-i);
                moves+= abs(2-j);
            }
        }
    }

    cout<<moves<<'\n';
}	


int main() {
    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Question: https://codeforces.com/problemset/problem/263/A (800)
/*
    Approach=> O(n^2)
        Simple iteration over the array and basic substraction
*/