#include <bits/stdc++.h>
#define pi pair<int, int>
using namespace std;
const int N = 105;
bool vis[N][N];
int dis[N][N];
int n, m;
int qi, qj;

vector<pi> path = {{-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {-2, -1}, {2, -1}, {-2, 1}, {2, 1}};

bool isValid(int cI, int cJ)
{
    if (cI >= 0 && cI < n && cJ >= 0 && cJ < m)
        return true;
    else
        return false;
}



void bfs(int si, int sj)
{
    queue<pi> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty())
    {
        pi parent = q.front();
        int pI = parent.first;
        int pJ = parent.second;
        q.pop();

        for (int i = 0; i < 8; i++)
        {
            pi p = path[i];
            int cI = pI + p.first;
            int cJ = pJ + p.second;

            if (isValid(cI, cJ) && !vis[cI][cJ])
            {
                vis[cI][cJ] = true;
                q.push({cI, cJ});
                dis[cI][cJ] = dis[pI][pJ] + 1;

                if (cI == qi && cJ == qj)
                {
                    return; 
                }
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;

        int si, sj, qi, qj;
        cin >> si >> sj;
        cin >> qi >> qj;

       

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                vis[i][j] = false;
                dis[i][j] = -1;
            }
        }

        bfs(si, sj);

        if (dis[qi][qj] != -1)
        {
            cout << dis[qi][qj] << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}
