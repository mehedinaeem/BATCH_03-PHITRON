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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int tar = 1000 - m;

        bool dp[n + 1][tar + 1];
        for (int i = 0; i <= n; i++)
        {
            dp[i][0] = true;
        }
        for (int i = 1; i <= tar; i++)
        {
            dp[0][i] = false;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= tar; j++)
            {
                if (arr[i - 1] <= j)
                {
                    dp[i][j] = dp[i][j - arr[i - 1]] || dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        if (dp[n][tar])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
