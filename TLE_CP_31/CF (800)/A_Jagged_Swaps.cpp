#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        vector <int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        // bool check=1; // true for strictly decreasing

        // // strictly decreasing
        // for(int i=0; i<n-1; i++){
        //     if(v[i]>v[i+1]) continue;
        //     else{
        //         check=0;
        //         break;
        //     } 
        // }

        // if(check) cout<<"NO1"<<'\n';
        // else{
        //     if(v[0]==n)cout<<"NO"<<'\n';
        //     else{
        //         bool check2=0;
        //         for(int i=0; i<n-2; i++){
        //             if(v[i]>v[i+1]&&v[i+1]<v[i+2]){
        //                 check2=1;
        //                 break;
        //             }
        //         }
        //         if(check2) cout<<"NO2"<<'\n';
        //         else cout<<"YES"<<'\n';
        //     }


        // }


        if(v[0]!=1)cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
    }
}
/*
    Quesn: https://codeforces.com/problemset/problem/1896/A
    Approach: With good observation it can be seen that if a1==1, it is always possible to sort the array.
        Because the operations that we can perform is from i>=2 and can move/swap a2 and a3. So it becomes necessary
        hat a1==1. Therefore if a1==1, it is always possible to sort else not.

        To sort the array when a1==1, follow:
        Consider the largest element of the array. Let its index be i. Our objective is to move ai to the end 
        of the array. If i=n, it means that the largest element is already at the end. Otherwise, since ai is
        the largest element, this means that ai−1<ai and ai>ai+1. Hence, we can do an operation on index i
        and move the largest element one step closer to the end. We repeatedly do the operation until we 
        finally move the largest element to the end of the array. Then, we can pretend that the largest element 
        does not exist and do the same algorithm for the prefix of size n−1. Hence, we will able to sort the 
        array by doing this repeatedly.
*/