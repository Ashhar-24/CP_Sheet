#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll count_inversions(vector <int> &v){
    long long k=0;                                // stores no of zeros
    long long ct=0;                               // stores no of possible inversions
    for(int i=v.size()-1; i>=0; i--){
        if(v[i]==0) k++;
        else{
            ct+=k;
            // cout<<ct<<" ";
        }
    }
    return ct;
}

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    ll ans= count_inversions(v);   
    // cout<<ans<<" "; 

    for(int i=0; i<n; i++){                         // fliping earliest 0
        if(v[i]==0){
            v[i]=1;
            ans= max(ans, count_inversions(v));     // again counting the possible inversions
            v[i]=0;                                 // Changing back the value to 0 as atmost 1 operation is allowed
            break;  
        }
    }
    // cout<<ans<<" ";


    for(int i=n-1; i>=0; i--){                      // flipping latest 1, ie earliest 1 from end
        if(v[i]==1){
            v[i]=0;
            ans= max(ans, count_inversions(v));     // again counting the possible inversions
            break;
        }
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

// Question: https://codeforces.com/contest/1760/problem/E (1100)
// Question insights: Have to calculate max no of (1,0) pair such that 1 appears before 0

/*
    Approach=> O(n)
    We first calculate the no of inversions ie, no of pairs of (1,0) befoe doing any operation.
    This can be done in two ways, either by counting the no of 0's from right and for each 1 encountered
    add the current no of 0's into another variable(ct). Keep doing this for all encountered 1's (as this would represent
    the no of (1,0) pairs for the encountered 1). 
    Another way of counting the no of inversions is to count the no of 1's from left and for each 0 encountered add the 
    current no of 1's into another varibale(ct).

    Now as in the question it is mentioned we've to report the max possible inversion either performing 0 or 1 operations.
    So as we've already calculated for 0 operations (above), we take max value of 'ct' after performing the operartion and
    it would give us the answer.
    Now for operation, we can change the first encountered 0 to 1, so to maximize the no of inversions (or) we can change the
    last encountered 1 to 0. So we do this and again calculate the no of inversions in both the cases and take the max value of
    the both. 
    Do note that we can atmost perform 1 operation, so if we first changed 0 to 1, after calculating the no of inversions,
    we must change back it's value to 0. Also as we've to calculate the no of inversions again and again it's better to have 
    make a function for the same.

*/
