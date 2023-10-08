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

        int tar = 1000 - m;

        vector<vector<int>> dp(n + 1, vector<int>(tar + 1, 0));
        dp[0][0] = 1;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= tar; j++)
            {
                dp[i][j] = dp[i - 1][j];
                if (v[i - 1] <= j)
                {
                    dp[i][j] += dp[i][j - v[i - 1]];
                    dp[i][j] %= MOD;
                }
            }
        }

        cout << dp[n][tar] << endl;
    }
    return 0;
}
