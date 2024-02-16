#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        /*
            Approach=> Calculate the dist b/w last gas station and the final distination and multiply it by 2.
            Then calculate the max difference of distance b/w individual gas station. Output the max b/w the above two.
        */

        int minreq = 2 * (abs(x - v[n - 1]));

        // Max distance b/w individual gas station
        int ans = v[0];
        for (int i = 1; i < n; i++)
        {
            ans = max(ans, v[i] - v[i - 1]);
        }

        cout << max(ans, minreq) << '\n';
    }
}