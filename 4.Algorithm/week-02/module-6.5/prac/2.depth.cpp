#include<bits/stdc++.h>
using namespace std;

const int N=1e5+7;
vector<int>adj[N];
bool visited[N];
int depth[N];
int height[N];

void dfs(int u)
{
    visited[u]=true;
    cout<<u<<" ";

    for(int v:adj[u])
    {
        depth[v]=depth[u]+1;
        if(!visited[v])
        {
            dfs(v);
            if(height[v]+1>height[u])
                height[u]=height[v]+1;
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
    cout<<endl;

    for(int i=1;i<=n;i++)
    {
        cout<<"Depth of "<<i<<"th Node= "<<depth[i]<<endl;
    }
    cout<<endl<<"Height:"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<"Heigth of "<<i<<"th Node= "<<height[i]<<endl;
    }
    return 0;
}