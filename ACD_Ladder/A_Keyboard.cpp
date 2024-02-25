#include <bits/stdc++.h>
using namespace std;

void solve(){
    char c; cin>>c;
    string s; cin>>s;


    vector <string> keyboard={"qwertyuiop","asdfghjkl;" , "zxcvbnm,./"};
    
    string ans="";
    if(c=='R'){
        for(int i=0; i<s.length(); i++){
            for(int j=0; j<3; j++){
                string temp= keyboard[j];
                for(int k=0; k<temp.length(); k++){
                    if(s[i]==temp[k]) ans+=temp[k-1];
                }
            }
        }
    }
    else{
        for(int i=0; i<s.length(); i++){
            for(int j=0; j<3; j++){
                string temp= keyboard[j];
                for(int k=0; k<temp.length(); k++){
                    if(s[i]==temp[k]) ans+=temp[k+1];
                }
            }
        }
    }
    cout<<ans<<'\n';
}	


int main() {
    int t=1; 
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

// Question: https://codeforces.com/problemset/problem/474/A (900)
/*
    Approach: O(n)
    Simply store the original keyboard values into a vector of strings.
    Then iterate over the given string s and match with the character of keyboard.
    As the length of strings inside keyboard is 10 and size of keyboard is 3, so 
    max time is O(30)[a constant], hence overall time complexity is O(s.length()), ie
    max possible length of given input string 
*/