#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
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
        //adj[v].push_back(u);
    }

    int val;
    cin >> val;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cout<<"List "<<i<<": ";
        for(int j:adj[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    //cout<< count;

    return 0;
}
