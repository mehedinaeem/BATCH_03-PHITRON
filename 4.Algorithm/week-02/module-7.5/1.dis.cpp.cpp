#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
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

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;

        for (int j = 0; j <= n; j++)
        {
            visited[j] = false;
            level[j] = 0;
        }

        if (a != b)
        {
            bfs(a);
            if (b < n && visited[b])  
            {
                cout << level[b] << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}
