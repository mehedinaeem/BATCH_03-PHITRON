#include<bits/stdc++.h>
using namespace std;

map<int, vector<int>> adj;
vector<int> componentSizes;
map<int, bool> visited;

int dfs(int s)
{
    //cout << s << " ";
    visited[s] = true;
    int count = 1;

    for (int a : adj[s])
    {
        if (!visited[a])
        {
            count += dfs(a);
        }
    }
    return count;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int u, v;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        //adj[v].push_back(u);
        visited[u] = false;
        //visited[v] = false;
    }

    for (auto entry : adj)
    {
        int node = entry.first;
        if (!visited[node])
        {
            int componentSize = dfs(node);
            if (componentSize > 1)
            {
                componentSizes.push_back(componentSize);
            }
        }
    }

    sort(componentSizes.begin(), componentSizes.end());

    //cout << componentSizes.size() << endl;
    for (int c : componentSizes)
    {
        cout << c << " ";
    }

    return 0;
}
