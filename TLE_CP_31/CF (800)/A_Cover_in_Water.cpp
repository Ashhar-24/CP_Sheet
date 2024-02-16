#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        char arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];

        /*  
            Question: https://codeforces.com/problemset/problem/1900/A

            Approach=> Unique Observation: If there are 3 consecutive empty cells, the middle cell can be used to fill rest all
            empty cells. Hence if we find 3 consecutive empty cells (count=2) else if not present count= total no of empty cells       
        */


        int count=0; bool present=0;

        // Checking if 3 consecutive empty cells are preseent or not
        for(int i=0; i<n-2; i++){
            // if(arr[i]==arr[i+1]==arr[i+2]=='.'){    => Syntactically incorrect
            if(arr[i]=='.' && arr[i+1]=='.' && arr[i+2]=='.'){
                count=2;
                present=1;
                break;
            }
        }

        if(present)cout<<count<<'\n';
        else{
            // When there are no 3 consecutive empty cells, calculating total no of empty cells
            for(int i=0; i<n; i++){
                if(arr[i]=='.') count++;
            }
            cout<<count<<'\n';
        }

    }

}