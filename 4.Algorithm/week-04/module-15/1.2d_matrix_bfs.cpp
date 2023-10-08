#include <bits/stdc++.h>
using namespace std;

#define pi pair<int, int>
const int N = 10005;
bool vis[N][N];
int dis[N][N];
int n, m;
vector<pair<int, int>> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isValid(int ci, int cj)
{
    if (ci >= 0 && ci < n && cj >= 0 && cj < m)
        return true;
    else
        return false;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    dis[si][sj] = 0;
    vis[si][sj] = true;

    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        int pI = parent.first;
        int pJ = parent.second;

        for (int i = 0; i < 4; i++)
        {
            pair<int, int> p = path[i];
            int cI = pI + p.first;
            int cJ = pJ + p.second;

            // if(isValid(cI,cJ) && !vis[cI][cJ])
            // {
            //     vis[cI][cJ]=true;
            //     q.push({cI,cJ});
            //     dis[cI][cJ]=dis[pI][pJ]+1;
            // }

            if (isValid(cI, cJ) && !vis[cI][cJ])
            {
                vis[cI][cJ] = true;
                q.push({cI, cJ});
                dis[cI][cJ] = dis[pI][pJ] + 1;
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int si, sj;
    cin >> si >> sj;
    bfs(si, sj);

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << dis[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}