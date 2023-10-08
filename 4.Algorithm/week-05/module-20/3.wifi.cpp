#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u;
    int v;
    long long w;
    Edge(int u, int v, long long w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main()
{
    bool cycle;
    int n, e;
    cin >> n >> e;

    vector<Edge> v;
    while (e--)
    {
        int a, b;
        long long w;
        cin >> a >> b >> w;
        Edge ed(a, b, w);
        v.push_back(ed);
    }

    int source;
    cin >> source;

    int t;
    cin >> t;
    while (t--)
    {
        int destination;
        cin >> destination;

        vector<long long> dis(n + 1, LLONG_MAX);
        dis[source] = 0;

        for (int i = 1; i <= n - 1; i++)
        {
            for (const Edge &ed : v)
            {
                int a = ed.u;
                int b = ed.v;
                long long w = ed.w;
                if (dis[a] != LLONG_MAX && dis[a] + w < dis[b])
                {
                    dis[b] = dis[a] + w;
                }
            }
        }

        cycle = false;
        for (const Edge &ed : v)
        {
            int a = ed.u;
            int b = ed.v;
            long long w = ed.w;
            if (dis[a] != LLONG_MAX && dis[a] + w < dis[b])
            {
                cycle = true;
                break;
            }
        }

        if (!cycle)
        {
            if (dis[destination] == LLONG_MAX)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dis[destination] << endl;
            }
        }
    }
    if (cycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }

    return 0;
}
