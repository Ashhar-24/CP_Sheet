#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector <int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        /*
            Quesn: https://codeforces.com/contest/1739/problem/B (1100)
            Approach=> Simple logic: As the array 'd' contains mod value, hence have to check whether the element
            in array 'ans' is strictly greater. Also have to take care whether v[i]==0 or not. 

        */

        vector <int> ans(n);
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