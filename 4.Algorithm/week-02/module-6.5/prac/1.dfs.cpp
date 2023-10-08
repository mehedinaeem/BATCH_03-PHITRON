#include<bits/stdc++.h>
using namespace std;

const int N=1e5+7;
vector<int>adj[N];
bool visited[N];

void dfs(int u)
{
    visited[u]=true;
    cout<<u<<" ";

    for(int v:adj[u])
    {
        if(!visited[v])
        {
            dfs(v);
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    dfs(1);
    return 0;
}