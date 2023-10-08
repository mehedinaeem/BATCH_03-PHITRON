#include <bits/stdc++.h>
using namespace std;

const int N = 20; // Maximum number of houses

vector<int> adj[N];

int main()
{
    int n, m;
    cin >> n >> m;
    
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back()
    }

    int val;
    cin >> val;

    vector<bool> visited(n, false);
    queue<int> q;
    q.push(val);
    visited[val] = true;

    int count = 0;
    while (!q.empty())
    {
        int current = q.front();
        q.pop();
        count++;
        cout<<current<<" ";

        for (int neighbor : adj[current])
        {
            if (!visited[neighbor])
            {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }

    cout<<endl << count - 1; // Exclude Kamal's own house
    return 0;
}
