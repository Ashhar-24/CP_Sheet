#include <bits/stdc++.h>
#define long long ll
using namespace std;

void solve(){
    char c[8][8];
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++) cin>>c[i][j];
    }

    char ans='A';                       // dummy value

    //traversing all rows
    for(int i=0; i<8; i++){
        bool ip_row=1;
        for(int j=0; j<8; j++){
            if(c[i][j]!='R'){
                ip_row=0;
                break;
            }
        }
        if(ip_row){                 // Traveresed all rows and if ip_row==1 means there exists a row with all entries as 'R'
            ans='R';
            break;
        }
    }
    if(ans!='R'){
        ans='B';
    }

    cout<<ans<<'\n';

}	


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Question: https://codeforces.com/contest/1742/problem/C (900)
/*
    Approach=> O(1)
    The question is pretty simple as it only requires to find that row (if present) which has all 'R's as it's entry or 
    any column that has all 'B's.
    So we can do in either way, ie. either traverse each row and check or traverse each column.

    Traversing each row, we just need to find that is there any entry which is not 'R'. If so, then that row isn't painted last.
    By doing so we can check which row was last painted. If there doesn't exists any such row, then 'B' color is the last color that
    was painted. 
    (Similar logic can be used if we go column-wise)
*/