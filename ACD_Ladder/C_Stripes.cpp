#include <bits/stdc++.h>
#define long long ll
using namespace std;

void solve(){
    char c[8][8];
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++) cin>>c[i][j];
    }

    char ans='A';
    
    //traversing all rows
    for(int i=0; i<8; i++){
        bool ip_row=1;
        for(int j=0; j<8; j++){
            if(c[i][j]!='R'){
                ip_row=0;
                break;
            }
        }
        if(ip_row){
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