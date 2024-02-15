#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector <int> v(n);

        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        /*
            Logic=> We first check if it is already sorted or not. If sorted, print "Yes" else for every k != 1,
            it is always possible to sort it.
        */


        bool check=1;
        for(int i=0; i<n-1; i++){
            if(v[i]>v[i+1]){
                check=0;
                break;
            }
        }
        
        // Print YES, if already sorted
        if(check==1){
            cout<<"YES"<<'\n'; 
        }

        // Else, For k!=1, it is always possible to sort it
        else{   
            if(k==1) cout<<"NO"<<'\n';      
            else cout<<"YES"<<'\n';
        }
    }
}