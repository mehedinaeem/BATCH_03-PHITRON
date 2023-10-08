#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 7;
vector<int> adj[N];
bool visited[N];
int level[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : adj[u])
        {
            if (!visited[v])
            {
                q.push(v);
                visited[v] = true;
                level[v] = level[u] + 1;
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int test_level;
    cin >> test_level;

    bfs(0);

    vector<int> v1;

    for (int i = 0; i < n; i++)
    {
        if (level[i] == test_level)
            v1.push_back(i);
    }

    if (v1.empty())
        cout << "-1" << endl;
    else
    {
        for (int lev : v1)
            cout << lev << " ";
    }

    return 0;
}
