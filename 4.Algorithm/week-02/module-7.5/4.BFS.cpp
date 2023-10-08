#include<bits/stdc++.h>
using namespace std;

const int N=1e5+7;
vector<int>adj[N];
bool visited[N];
//int count=0;


void bfs(int s)
{
    int count=0;
    queue<int>q;
    q.push(s);
    visited[s]=true;

    while(q.empty()==false)
    {
        int u=q.front();
        q.pop();
        count++;

        for(int v:adj[u])
        {
            if(visited[v]==false)
            {
                q.push(v);
            }
            visited[v]=true;
        }
    }
    cout<<count-1<<endl;
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
    int val;
    cin>>val;
    bfs(val);

    return 0;
}