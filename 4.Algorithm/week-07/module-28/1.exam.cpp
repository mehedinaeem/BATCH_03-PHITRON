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
        vector<int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        vector<bool> dp(m + 1, false);
        dp[0] = true;

        for (int i = 0; i < n; i++)
        {
            for (int j = m; j >= A[i]; j--) // Change this line
            {
                dp[j] = dp[j] || dp[j - A[i]];
            }
        }

        if (dp[n])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
