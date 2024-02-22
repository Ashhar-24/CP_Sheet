#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;

    string ans;
    int i=0; 

    while(i<s.length()){
        if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B'){
            i+=3;
        } 

        else{
            ans.push_back(s[i]);
            if(s[i+1]=='W' and s[i+2]=='U' and s[i+3]=='B') {
                ans.append(" ");
                i+=4;
            }
            else i++;
        }
    }
        cout<<ans;
}

// Quesn: https://codeforces.com/contest/208/problem/A (900 rated)
/*
    Approach: O(n)
        Just loop over the string if found "WUB" increment the iterator by 3. Else push the character and check if the
        next 3 characters are WUB, if yes add a space and increase the iterator by 4.
*/