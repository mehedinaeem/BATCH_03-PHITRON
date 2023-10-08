#include<bits/stdc++.h>
using namespace std;

const int N=1e5+7;
vector<int>adj[N];
bool visited[N];

void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s]=true;

    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        cout<<u<<" ";

        for(int v:adj[u])
        {
            if(visited[v]==false)
                q.push(v);

            visited[v]=true;
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
        adj[v].push_back(u);
    }
    bfs(1);

    return 0;
}