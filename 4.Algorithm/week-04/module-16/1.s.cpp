#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;

vector<pair<int, int>> adj[N];

int main()
{
    int e;
    cin >> e;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back({u, v});
    }

    sort(adj.begin(),adj.end());
    cout<<endl;
    for (int i = 0; i < e; i++)
    {
        for (auto j : adj[i])
        {
            cout << j.first << " " << j.second << endl;
        }
    }

    return 0;
}
