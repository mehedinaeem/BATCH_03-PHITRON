#include<bits/stdc++.h>
using namespace std;

const int N=1e5+7;
vector<int>adj[N];
bool visited[N];
int level[N];

void bfs(int s,int val)
{
    queue<int>q;
    q.push(s);
    visited[s]=true;
    level[s]=0;
    int u;

    while(!q.empty())
    {
        u=q.front();
        q.pop();
        //cout<<u<<" ";
        if(level[u]==val)
            cout<<u<<" ";
        

        for(int v:adj[u])
        {
            if(visited[v]==true)  continue;
                q.push(v);
            visited[v]=true;
            level[v]=level[u]+1;
        }
    }
    if(val>level[u])
        cout<<"-1"<<endl;
}

int main()
{
    int m,n;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    int test_level;
    cin>>test_level;

    bfs(0,test_level);
    

    // for(int i=0;i<n;i++)
    // {
    //     cout<<"level of Node "<<i<<": "<<level[i]<<endl;
    // }

    return 0;
}