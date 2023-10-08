#include<bits/stdc++.h>
using namespace std;

class edge
{
    public:
       int u;
       int v;
       int w;

       edge(int u,int v,int w)
       {
        this->u=u;
        this->v=v;
        this->w=w;
       }
};

int main()
{
    int n,e;
    cin>>n>>e;
    vector<edge>v;

    while(e--)
    {
        int a,b,w;
        cin>>a>>b>>w;
        edge ed(a,b,w);
        v.push_back(ed);

        //cout<<ed.u<<" "<<ed.v<<" "<<ed.w<<endl;
    }

    int dis[n+1];
    for(int i=1;i<=n;i++)
    {
        dis[i]=INT_MAX;
    }
    
    dis[1]=0;

    for(int i=1;i<n-1;i++)
    {
        for(int j=0;j<v.size();j++)
        {
            edge ed=v[j];
            int a=ed.u;
            int b=ed.v;
            int c=ed.w;

            if(dis[a]+c<dis[b])
            {
                dis[b]=dis[a]+c;
            }
        }
    }

    for(int i=1;i<=n;i++)
    {
        cout<<"Node "<<i<<": "<<dis[i]<<endl;
    }
    return 0;
}