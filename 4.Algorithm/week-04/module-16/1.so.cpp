#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;

priority_queue<pair<int, int>> adj[N];

int main()
{
    int e;
    cin >> e;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push({u, v});
    }

    // cout << endl;

    // for (int i = 0; i <N; i++)
    // {
    //     sort(adj[i].begin(), adj[i].end());
    // }

    for (int i = 0; i <N; i++)
    {
        for (auto j : adj[i])
        {
            cout << j.first << " " << j.second << endl;
        }
    }

    return 0;
}
