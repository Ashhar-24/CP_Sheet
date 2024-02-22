#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];


    sort(v.begin(), v.end());

    int sum=0;
    for(int i=0; i<n; i++) sum+=v[i];   // Calculates the array sum

    int count=0, maxsum=0;              // count: Stores min no of elements required
    for(int i=n-1; i>=0; i--){
        if(maxsum<=sum){
            maxsum+=v[i]; 
            count++;
            sum-=v[i];
        }
    }

    cout<<count<<'\n';

}

//  Ques: https://codeforces.com/contest/160/problem/A
/*  Approach: O(n)
        As we have to select min no of elements such that we get the max sum and the sum should be greater 
        than the sum of remaining elements. Therefore we first sort the array and to get max sum with min no.
        of elements, we iterarte the array backwards.
    
*/