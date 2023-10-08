#include<bits/stdc++.h>
using namespace std;
#define pi pair<int,int>

const int N=1e3+5;
bool vis[N][N];
int dis[N][N];
vector<pi>path={{0,1},{0,-1},{-1,0},{1,0}};
int n,m;

bool isValid(int p1,int p2)
{
    if(p1>=0 && p1<n && p2>=0 && p2<m)
        return true;
    else 
       return false;
}

void dfs(int si,int sj)
{
    vis[si][sj]=true;
    //dis[si][sj]=0;
    
    for(int i=0;i<4;i++)
    {
        pi p=path[i];
        int p1=si+p.first;
        int p2=sj+p.second;

        if(isValid(p1,p2) && !vis[p1][p2])
        {
            dis[p1][p2]=dis[si][sj]+1;
            dfs(p1,p2);
        }
    }
}

int main()
{
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    int si,sj;
    cin>>si>>sj;
    dfs(si,sj);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<dis[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}