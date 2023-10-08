#include<bits/stdc++.h>
using namespace std;

const int N=1e5+7;
vector<int>adj[N];
bool visited[N];

void dfs(int u)
{
     //cout<<u<<" ";
     visited[u]=true;
     for(int v:adj[u])
     {
        if(visited[v]==false)
            dfs(v);
     }
     cout<<u<<" ";
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
        adj[v].push_back(u);
    }

    dfs(1);

    // for(int i=1;i<=n;i++)
    // {
    //     cout<<"List "<<i<<":";
    //     for(auto j:adj[i])
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    //}
    return 0;
}