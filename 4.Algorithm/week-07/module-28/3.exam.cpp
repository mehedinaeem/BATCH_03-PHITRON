#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        if (m == 1000)
        {
            cout << 1 << endl;
        }
        else
        {
            int tar = 1000 - m;
            vector<int> dp(tar + 1, 0);
            dp[0] = 1;

            for (int i = 0; i < n; i++)
            {
                for (int j = v[i]; j <= tar; j++)
                {
                    dp[j] += dp[j - v[i]];
                    dp[j] %= MOD;
                }
            }

            cout << dp[tar] << endl;
        }
    }
    return 0;
}
