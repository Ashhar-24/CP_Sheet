#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector <string> v(n);
    unordered_set <string> s;   // Takeaway
    for(int i=0; i<n; i++){
        cin>>v[i];
        s.insert(v[i]);
    } 

    string ans;

   for(int i=0; i<n; i++){
        if(v[i].size()==1){
            ans.append("0");
            continue;
        }

        string temps = v[i];
        string subs="";

        bool ispresent=0;

        while(!temps.empty()){     
            subs=temps[temps.length()-1]+subs;
            temps.pop_back();

            if(s.count(subs) and s.count(temps)){
                ans.append("1");
                ispresent=1;
                break;
            }
        }
            if(ispresent!=1)ans.append("0");
        }

    /*
        O(n^2) approach: O(n) for loop and O(n) for find()

        for(int i=0; i<n; i++){
            string s = v[i];
            string temp="";

            bool ispresent=0;

            while(!s.empty()){
                temp=s[s.length()-1]+temp;
                s.pop_back();
                if(find(v.begin(), v.end(), temp)!=v.end() && find(v.begin(), v.end(), s)!=v.end()){
                    ispresent=1;
                }
                if(ispresent) break; 
            }
            if(ispresent!=1)ans.append("0");
            else ans.append("1");
        }

    */
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

// Quesn: https://codeforces.com/contest/1703/problem/D

/*
    Approach: 1. O(n^2)    
              2. O(n)

    1. As I had looped over the vector of strings and used again find() over the vector, both had time complexity
       as O(n), hence got TLE as the constraints ie, n is <=10^5.

    2. Optimised above by using unordered_set. The algorithm to create the string was same, just changed the way of
       finding the elements of the vector. We used count() over the unordered_set which stored the elements of 
       the vector and it gave the output in O(1).
*/