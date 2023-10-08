#include<bits/stdc++.h>
using namespace std;

const int N=1e5+7;
vector<int>adj[N];
vector<int>cmp;
bool vis[N];

void dfs(int s)
{
    //cout<<s<<" ";
    vis[s]=true;
    cmp.push_back(s);
    
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

    int count=0;
    int flag;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            count++;
            dfs(i);
            
            flag=0;
            for(int val:cmp)
            {
                cout<<val<<" ";
                flag++;
            }
            //cout<<endl;
            cout<<"-->"<<flag;
            cout<<endl;
            cmp.clear();
        }
    }
    cout<<endl<<count<<endl;
    return 0;
}