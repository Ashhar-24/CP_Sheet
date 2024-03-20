#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> ans;
    ans.push_back(v[0]);

    for(int i=1; i<n; i++){
        if(v[i]>=v[i-1]){
            ans.push_back(v[i]);
        }
        else {
            ans.push_back(v[i]);
            ans.push_back(v[i]);
        }
    }

    cout<<ans.size()<<'\n';
    for(int a: ans) cout<<a<<" ";
    cout<<'\n';
}


int main() {
    int t=1; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Question: https://codeforces.com/problemset/problem/1862/B

/*
    Here after carefull observation, 1st element as given will be same. Now for next element, if v[i]>=v[i-1], ie
    current element is either greater or equal to previous element insert it once, else twice.
    Doing so because, if the current element is smaller to previous element then it must be present 2 times
    (other possible elements could have been v[i]-1, v[i]-2,....1 ; but we didn't choose to insert v[i]-1 as
    if v[i]==1 then 0 will be inserted and in the question it is not allowed, hence we inserted the same element)
    so that the given conditions are satisfied. 
*/