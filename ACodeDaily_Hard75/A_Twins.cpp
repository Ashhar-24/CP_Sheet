#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    /*
        Ques: https://codeforces.com/contest/160/problem/A
        To get min no of coins required, sort the array and calculate the sum from end and keep subtracting the
        value from total sum of array. Keep doing until the sum gets strictly greater than the remaining sum.
    */

    sort(v.begin(), v.end());

    int sum=0;
    for(int i=0; i<n; i++){sum+=v[i];}

    int count=0, maxsum=0;
    for(int i=n-1; i>=0; i--){
        if(maxsum<=sum){
            maxsum+=v[i]; 
            count++;
            sum-=v[i];
        }
    }

    cout<<count<<'\n';

}