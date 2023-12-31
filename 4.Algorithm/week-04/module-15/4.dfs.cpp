#include<bits/stdc++.h>
using namespace std;

const int N=1e5+7;
vector<int>adj[N];
bool vis[N];

void dfs(int s)
{
    vis[s]=true;
    cout<<s<<" ";

    for(int v:adj[s])
    {
        if(!vis[v])
        {
             dfs(v);
        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);
    return 0;
}