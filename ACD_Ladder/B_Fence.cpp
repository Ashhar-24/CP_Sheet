#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    vector <int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    

    // We've to find that subarray with size 'k' and it should have least sum
    // A standard question of Two Pointer

    //Calculating sum of first k elements
    int sum=0;
    for(int i=0; i<k; i++) sum+=v[i];

    // Iterating over the remaining array left and applying sliding window concept
    int left=0, right=k-1;        // As our array is 0-based indexed
    int ans=sum, index=left;
    while(right<n-1){
        sum-=v[left];
        left++;
        right++;
        sum+=v[right];
        if(sum<ans) index=left;
        ans=min(ans,sum);
        // cout << sum << " ";
    }

    // if(n==1) cout<<1<<'\n';
    // else 
    cout<<index+1<<'\n';            // Report ans in 1-based indexed
}	


int main() {
    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

// Question: https://codeforces.com/problemset/problem/363/B (1100) [Subaraay of size 'k' with least sum]

/*
    Approach=> O(n) [Two Pointer]
        What we simply do is that first calculate the sum of first k elements (as the min size of subarray is 'k')
        Then we traverse the remaining array by moving 1 step towards right and leaving 1 step towards left, so that
        ultimately we have 'k' elements. By doing so traverse thw whole array and calculate the min sum possible
        and when the current sum of array becomes smaller than the previous sum, we store the index (leftmost) value
        of that sub-array. And since we can print any index if multiple such indexes are possible, we don't worry
        about the changing value of 'index'.
*/
