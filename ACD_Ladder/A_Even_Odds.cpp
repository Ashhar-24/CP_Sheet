#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,k; cin>>n>>k;

    // int arr[n];
    // int j=0;
    // for(int i=1; i<=n; i+=2){    // storing all odd nos
    //         arr[j]=i;
    //         j++;
    // }
    // for(int i=2; i<=n; i+=2){    // storing all even nos
    //         arr[j]=i;
    //         j++;
    // }

    // cout<<arr[k-1]<<'\n';        // printing the element at kth position

   // Getting TLE in above approach of array iteration.


   long long ans=0;

   if(n%2==0){              // for even 'n'
    if(k<=(n/2)){
        ans=2*k-1;
        cout<<ans<<'\n';
    }
    else{
        ans= 2*(k-(n/2));
        cout<<ans<<'\n';
    } 
   }

   else{                    // for odd 'n'
    if(k<=ceil(n/2.0)){
        ans=2*k-1; cout<<ans<<'\n';
    } 

    else{
        ans=2*(k-ceil(n/2.0)); cout<<ans<<'\n';
    }
   }


}


// Question: https://codeforces.com/contest/318/problem/A
/* Approach: 
        As the constraints given are of order 1e12 hence, we cannot use loop/iteration (O(n)) method to find out our answer.
        Therefore had to use some observation and math to get the answer.

    Observation: O(1)
        If n is odd, there will be total n/2 odd nos b/w 1 and n & n/2 -1 even nos.
        while if n is even, there will be total n/2 odd and even no.s in b/w.

    Also:
        Getting unknown behaviour while printing directly 2*(k-ceil(n/2.0)), ie not getting long long answer
        because it was getting converted into double and hence overflow chances increased, therefore had to use 
        a variable to store the result.
*/ 

