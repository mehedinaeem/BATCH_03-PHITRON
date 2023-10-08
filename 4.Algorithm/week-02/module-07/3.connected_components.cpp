#include<bits/stdc++.h>
using namespace std;

const int N=1e5+7;
vector<int>adj[N];
vector<int>v;
bool visited[N];
int component_count;

void dfs(int s)
{
    component_count++;
    cout<<s<<" ";
    visited[s]=true;
    

    for(int a:adj[s])
    {
        if(visited[a]==false)
        {
            //count++;
            dfs(a);
        }
       // count++;
    }
    //v.push_back(count);
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
    cout<<endl;

    int cc=0;
    
    for(int i=1;i<=n;i++)
    {
        
        if(visited[i]==false)
        {
            
            cout<<"Number of component "<<i<<": ";
            dfs(i);
            cout<<endl;
            cout<<"total compo: "<<component_count<<endl;
            component_count=0;
            //cout<<endl;
            cc++;
        }

    }
    cout<<"Number of connected components: "<<cc<<endl;
    //sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<i<<" ";
    // }
    // for(int c:v)
    // {
    //     cout<<c<<" ";
    // }

    return 0;
}