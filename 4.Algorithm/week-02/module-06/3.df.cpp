#include<bits/stdc++.h>
using namespace std;

const int N=1e5+7;
vector<int>adj[N];
bool visited[N];

void dfs(int s)
{
    cout<<s<<" ";
    visited[s]=true;
    for(int v:adj[s])
    {
        //cout<<v<<" ";
        if(visited[v]==false)
            dfs(v);
    }
}

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        //adj[v].push_back(u);
    }
    dfs(1);
    return 0;
}