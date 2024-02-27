#include <bits/stdc++.h>
#define long long ll
using namespace std;

void solve(){
    int n; cin>>n;
    vector <pair<int,int>> v;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        int b; cin>>b;
        v.push_back({a,b});
    }

    // As we have to check that whether there exists a laptop pair so that the given condition is satisfied
    sort(v.begin(), v.end());                       // O(n*logn)

    bool ans=0;
    for(int i=0; i<v.size()-1; i++){
        if(v[i].second>v[i+1].second){             // Given price & performance of each laptop is different (Made the solution easy,
                                                  //  else would had to take all possible laptop combinations)
            ans=1;
            break;
        }
    }

    if(ans) cout<<"Happy Alex"<<'\n';
    else cout<<"Poor Alex"<<'\n';
    
}	


int main() {
    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Question: https://codeforces.com/contest/456/problem/A (1100)
/*
    Approach=> O(n*logn)
        As we just had to find that whether there existed a laptop pair such that the condition given by Alex is
        fulfilled or not, we sorted the vector of pair (as the sort() on pair sorts it on the basis of 1st value).
        Now as the vector is sorted ie, arranged in increasing order of laptop price, and as all the price and 
        performance values are different, we just need to check that whether there exists a laptop with better 
        performance than the latter, while traversing the vector.
*/