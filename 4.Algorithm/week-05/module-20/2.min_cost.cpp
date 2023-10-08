#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;
int main()
{
    long long n, e;
    cin >> n >> e;
    long long dis[n + 1][n + 1];
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            dis[i][j] = INF;
            if (i == j)
                dis[i][j] = 0;
        }
    }
    while (e--)
    {
        long long a, b, w;
        cin >> a >> b >> w;
        dis[a][b] = min(dis[a][b], w);
    }
    for (long long k = 1; k <= n; k++)
    {
        for (long long i = 1; i <= n; i++)
        {
            for (long long j = 1; j <= n; j++)
            {
                if (dis[i][k] + dis[k][j] < dis[i][j])
                {
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }

    long long q;
    cin >> q;
    while (q--)
    {
        long long X, Y;
        cin >> X >> Y;
        if (dis[X][Y] == INF)
            cout << -1 << endl;
        else
            cout << dis[X][Y] << endl;
    }

    return 0;
}
