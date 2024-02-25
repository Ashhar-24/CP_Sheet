#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);

    for(int i=0; i<n; i++) cin>>v[i];

    int count=0;
    for(int i=0; i<n; i++){
        if(v[i]<0){
            count++;
            v[i]=-1*v[i];
        } 
    }

    sort(v.begin(), v.end());

    long long ans=0;
    for(int i=0; i<n; i++) ans+=v[i];

    if(count%2!=0){
        ans-=2*v[0];
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

// Question: https://codeforces.com/contest/1791/problem/E (1100)
/*
    Approach=> O(n)
        As have to get maximum sum possible, so we must sort the array. But the thing to observe
        (Takeaway) is that if we just sort the array we would be missing out the fact that the negatives
        sign can be interchanged for adjacent elements as indexes would be mixed of each element.

        On careful observation if we look on the movement of the -ve sign, we can realize that
        if no of -ve signs is even, then any combination of signs will result in array with all
        elements as +ve. And if the no of -ve signs is odd, then we can move this sign to the leftmost,
        after sorting the array ie to the smallest element in the array.
        In this way we can find the max sum possible by performing the operations as said.
*/