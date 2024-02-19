#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];


                    // int m; cin>>m;
                    // while(m--){
                    //     int coins; cin>>coins;
                    //     int count=0;
                    //     for(int i=0; i<n;i++){
                    //         if(v[i]<=coins) count++;
                    //     }

                    //     cout<<count<<'\n';
                    // }
                    // This approach gava TLE: O(m*n)=1e14


    /*
        Ques: https://codeforces.com/contest/706/problem/B (1100 rated)
        First the brute force approach of counting the no.s smaller than or equal to coins gave TLE.
        To Optimise it,we have 2 solutions:

        1. 
    */


    // Solution 1

    // vector <int> freq(1e5+1,0);
    // for(int i=0; i<n; i++){
    //     freq[v[i]]++;
    // }


    // Alternate way to do this:
    // vector <int> freq(1e5+1,0);
    // for(int i=0; i<n; i++){
    //     cin>>v[i];
    //     freq[v[i]]++;
    // }
    
    // calculating the prefix sum of the 'freq' array
    // vector <int> presum(1e5+1,0);
    // for(int i=1; i<1e5+1; i++){
    //     presum[i]=presum[i-1]+freq[i];
    // }

    // int m; cin>>m;
    // while(m--){
    //     int coins; cin>>coins;
    //     if(coins>1e5) cout<<n<<'\n';
    //     else cout<<presum[coins]<<'\n';
    // }


    // Solution 2 (easy way): Binary Search and using upper bound
    sort(v.begin(),v.end());

    int m; cin>>m;
    while(m--){
            int coins; cin>>coins;
            auto x=upper_bound(v.begin(),v.end(),coins)-v.begin();
            cout<<x<<'\n';
        }
}