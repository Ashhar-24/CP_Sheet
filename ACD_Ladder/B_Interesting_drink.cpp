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
                    // TLE: O(m*n)=1e10


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


    // Solution 2 (easy way): Using upper bound O(m*logn)
    sort(v.begin(),v.end());

    int m; cin>>m;
    while(m--){
            int coins; cin>>coins;
            auto x=upper_bound(v.begin(),v.end(),coins)-v.begin();      // O(logn)
            cout<<x<<'\n';
        }
}

//Ques: https://codeforces.com/contest/706/problem/B (1100 rated)

/*
    Approach=>  As the constraints given n=1e5 and m=1e5, so for optimal solution the total complexity
                of our solution must be either O(n) or O(nlogn).

            To Optimise it, we have 2 solutions:

            1. [Binary Search] (easy to understand) O(nlogn)
            Using Binary search (upper bound) approach. 
            First we sort the array then, calculate the no of elements smaller or equal to the coins by
            taking the upper bound of it.

            2. [dp] (bit complex to understand) O(n)
            We make a frequency array that keeps track of the frequency of the elements in the original array. 
            Then we take the prefix sum of the frequency array which will direclty tell us the number of elements 
            smaller or equal to the element represented by the index of prefix array ie, by directly going to the 
            index we can know how many elements are smaller than or equal to that index (which represents the coins).
*/