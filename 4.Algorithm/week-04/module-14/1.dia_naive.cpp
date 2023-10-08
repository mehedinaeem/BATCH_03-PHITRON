#include<bits/stdc++.h>
using namespace std;

const int N=1e5+7;
int dis[N];
vector<pair<int,int>>v[N];

void diajkstra(int s)
{
    queue<int>q;
    q.push(s);
    dis[s]=0;

    while(!q.empty())
    {
       int parent=q.front();
       q.pop();
       for(int i=0;i<v[parent].size();i++)
       {
           pair<int,int>child=v[parent][i];
           int childNode=child.first;
           int childCost=child.second;
           //cout<<v[parent][i]<<endl;
        //    cout<<parent<<endl;
        //    cout<<child.first<<" "<<child.second<<endl;

        if(dis[parent]+childCost<dis[childNode])
        {
            dis[childNode]=dis[parent]+childCost;
            q.push(childNode);
        }
       }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        v[a].push_back({b,w});
        v[b].push_back({a,w});
    }

    for(int i=1;i<=n;i++)
    {
        dis[i]=INT_MAX;
    }

    diajkstra(1);

    for(int i=1;i<=n;i++)
    {
        cout<<"Node "<<i<<" : "<<dis[i]<<endl;
    }

    return 0;
}