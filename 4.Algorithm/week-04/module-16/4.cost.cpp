#include<bits/stdc++.h>
using namespace std;

const int N=1e5+7;
vector<pair<int,int>>v[N];
int dis[N];
bool vis[N];

void dijkstra(int source)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({0, source});
    dis[source] = 0;

    while(!pq.empty())
    {
        pair<int,int> parent = pq.top();
        pq.pop();

        int parentNode = parent.second;

        if(vis[parentNode])
        {
            continue;
        }
        vis[parentNode]=true;

        int parentCost = parent.first;

        for(int i=0; i<v[parentNode].size(); i++)
        {
            pair<int,int> child = v[parentNode][i];
            int childNode = child.first;
            int childCost = child.second;

            if(parentCost + childCost < dis[childNode])
            {
                dis[childNode] = parentCost + childCost;
                pq.push({dis[childNode], childNode});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    for(int i=1; i<=n; i++) {
        dis[i] = INT_MAX;
    }

    for(int i=0; i<e; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
        //v[b].push_back({a, w});
    }

    int source;
    cin >> source;
    int t;
    cin >> t;
    while(t--)
    {
        int d, dw;
        cin >> d >> dw;
        
        for(int i=1; i<=n; i++)
        {
            dis[i] = INT_MAX;
            vis[i] = false;
        }
        dis[source] = 0;

        dijkstra(source);

        if(dis[d] <= dw)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
