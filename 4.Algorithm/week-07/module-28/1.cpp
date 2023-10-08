#include <bits/stdc++.h>
using namespace std;
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
            cout << "YES" << endl;
        else
        {

            int tar = 1000 - m;

            bool dp[n + 1][tar + 1];
            for (int i = 1; i <= tar; i++)
                dp[0][i] = false;
            dp[0][0] = true;
            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j <= tar; j++)
                {
                    if (v[i - 1] <= j)
                    {
                        dp[i][j] = dp[i][j - v[i - 1]] || dp[i - 1][j];
                    }
                    else
                        dp[i][j] = dp[i - 1][j];
                }
            }

            if (dp[n][tar])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}