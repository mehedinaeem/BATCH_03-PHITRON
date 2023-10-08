#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];
vector<int> v;

void dfs(int s)
{
    // cout << s << " ";
    visited[s] = true;

    for (int v : adj[s])
    {
        if (!visited[v])
        {
            dfs(v);
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
    }

    // dfs(1);

    int cc = 0;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        int k = cc;
        if (visited[i] == false)
        {
            dfs(i);
            cc++;
            count++;
            // k = cc;
        }
        else if (visited[i] == true)
        {
            count++;
        }

        if (cc == k + 1)
        {
            v.push_back(count);
            count = 0;
            k++;
        }
    }
    cout << endl
         << cc << endl;

    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}