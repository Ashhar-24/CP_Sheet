#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        // vector <int> v(n);
        // for(int i=0; i<n; i++){
        //     cin>>v[i];
        // }

        // int ans=-1;

        //     for(int i=n-1; i>=0; i--){
        //         for(int j=n-1;j>=0; j--){
        //             if(__gcd(v[i],v[j])==true){
        //                 ans=max(ans,i+j+2);
        //             }
        //         }
        //     }
        // cout<<ans<<'\n';
        // TLE: O(n^2) As n<=1e5, brute force gave TLE

        vector <int> v(1001,0);     //intializing array of size 1001 as we won't be using 0th index and all have value 0
        for(int i=1; i<=n; i++){
            int value; cin>>value;
            v[value]=i;             // stores the index value 'i' where the element was last found ie, max index where it is found
        }

        int ans=-1;
        for(int i=1; i<=1000; i++){
            for(int j=1; j<=1000; j++){
                if(v[i] && v[j] && __gcd(i,j)==1){      // i and j represents the numbers and v[i],v[j] their respective last indices
                    ans= max(ans, v[i]+v[j]);
                }
            }
        }

        cout<<ans<<'\n';
    }
}

// Question: https://codeforces.com/contest/1742/problem/D (1100) [Must practise]
/*
    Approach=>
        As the constraint given n==1e5, so we must either solve the problem in O(n) or O(n*logn).
        But since the question is pretty simple, so we just implement is using brute force using a twist.
            
        Since value of a[i]<=1000, if there exists an approach where we can use this constraint, we would be allowed to 
        use O(a^2).
            So using this, what we can do is that, we make an array to store the index where/when it comes into the 
            main array. Eg: 1 2 3 3 4 7, [1 2 4 5 0 0 6] represents the last index where 'i' was found.

            ie, instead of storing  the value at the index, we store the index at the said value
            (which now becomes the new index), ie now the value acts as the new index and the index as the new value. 
            By doing this we store the element's max index where it is present. ie, now the array contains the max index 
            for the element and if the element is not present the index value will be 0.
            Then we traverse this array and check if the element is present ie, v[i]>0 if the element is present and
            then see if v[i] and v[j], ie the max index where i and j are present, are co prime or not.
*/