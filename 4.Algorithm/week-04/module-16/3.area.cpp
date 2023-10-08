#include <bits/stdc++.h>
#define pi pair<int, int>
using namespace std;

int n, m;
const int N = 1005;
bool vis[N][N];
char a[N][N];
vector<pi> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
vector<int> areas; // Store the areas of components

bool isValid(int cI, int cJ)
{
    if (cI >= 0 && cI < n && cJ >= 0 && cJ < m && a[cI][cJ] == '.')
        return true;
    else
        return false;
}

void dfs(int si, int sj, int &myFlag)
{
    vis[si][sj] = true;
    myFlag++;
    for (int i = 0; i < 4; i++)
    {
        pi p = path[i];
        int ci = si + p.first;
        int cj = sj + p.second;
        if (isValid(ci, cj) && !vis[ci][cj])
        {
            dfs(ci, cj, myFlag);
        }
    }
}

int main()
{
    cin >> n >> m;
    bool hasComponents = false; // Flag to check if there are any components

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '.')
                hasComponents = true;
        }
    }

    if (!hasComponents)
    {
        cout << "-1" << endl;
        return 0;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && a[i][j] == '.')
            {
                int myFlag = 0;
                cnt++;
                dfs(i, j, myFlag);
                areas.push_back(myFlag);
            }
        }
    }

    sort(areas.begin(), areas.end());

    if (!areas.empty())
        cout << areas.front() << endl;
    else
        cout << "-1" << endl;

    return 0;
}
