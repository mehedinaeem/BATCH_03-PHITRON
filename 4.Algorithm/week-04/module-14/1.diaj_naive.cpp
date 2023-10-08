#include<bits/stdc++.h>
using namespace std;

const int N=1e5+7;
vector<pair<int,int>>adj[N];
int dis[N];

void diajkstra(int s)
{
    queue<int>q;
    q.push(s);
    dis[s]=0;

    while(!q.empty())
    {
        int parent=q.front();
        q.pop();

        for(int i=0;i<adj[parent].size();i++)
        {
            pair<int,int>child=adj[parent][i];
            int childNode=child.first;
            int childCost=child.second;
            cout<<childNode<<" "<<childCost<<endl;
            if(dis[parent]+childCost < dis[childNode])
            {
                dis[childNode]=dis[parent]+childCost;
                q.push(childNode);
            }
        }
        cout<<endl;
    }

}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});

    }
    for(int i=1;i<=n;i++)
    {
        dis[i]=INT_MAX;
    }
    diajkstra(1);

    for(int i=1;i<=n;i++)
    {
        cout<<"Node "<<i<<": "<<dis[i]<<endl;
    }
    return 0;
}