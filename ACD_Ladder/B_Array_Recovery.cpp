#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector <int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        vector <int> ans(n);    // stores the o/p array
        bool possible=1;        // to check whether a unique array is possible or not

        ans[0]=v[0];
        for(int i=1; i<n; i++){
            if(ans[i-1]<v[i] or v[i]==0) ans[i]=ans[i-1]+v[i];
            else {
                possible=0;         // as it is not strictly greater, hence two values are possible for ans[i]
                break;
            }
        }

        if(!possible) cout<<-1<<'\n';
        else{
            for(int i=0; i<n; i++) cout<<ans[i]<<" ";
            cout<<'\n';
        }

    }
}

// Quesn: https://codeforces.com/contest/1739/problem/B (1100)

/*
    Approach=> O(n)
        Basic mod (difference) observation shows us that since the array 'v' contains 
        mod value, hence have to check whether the element in array 'ans[i]' is strictly greater than 
        the next element in 'v' ie v[i+1], as smaller value of v[i+1] would mean that there could be 
        2 nos possible such that mod difference gives ans[i]. Also have to take care when v[i]==0, 
        as it would mean that difference is zero or ans[i-1]==ans[i] 

*/