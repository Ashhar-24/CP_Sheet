// Quesn: https://codeforces.com/contest/158/problem/B (1100)

// Basic approach but a lot of edge cases / combinations possible

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector <int> v(n);
    int c1=0, c2=0, c3=0, c4=0;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        if(v[i]==1) c1++;
        else if(v[i]==2) c2++;
        else if (v[i]==3) c3++;
        else if(v[i]==4) c4++;
    }

    // cout<<c1<<c2<<c3<<c4<<'\n';

    int ans=0;
    ans += c4;

    // {1,3}
    if(c3>=c1){
        ans+=c1;
        c3-=c1;
        c1=0;
        ans+=c3;
        // cout<<ans<<'\n';
    }
    else{
        ans+=c3;
        c1-=c3;
    }
    // cout<<ans<<'\n';

    // {2,2} and {1,2}
    if(c2%2==0) {
        ans+=(c2/2);
        c2=0;
    }
    else{
        ans+= (c2/2);
        c2=1;
        // 1's >= 2
        if(c1>=2){
            ans++;
            c1-=2;
        }
        else if(c1){
            ans++;
            c1--;
        }
        else{
            ans++;
        }
    }

    // cout<<ans<<'\n';

    if(c1>4) ans+= ceil(c1/4.0);
    else if(c1)ans++;

    cout<<ans<<'\n';
}