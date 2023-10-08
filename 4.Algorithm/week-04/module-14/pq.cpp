#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<pair<int,int>>pq;
    // pq.push({5,10});
    // cout<<pq.top().first<<" "<<pq.top().second;

    int n;
    cout<<"Enter N element: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        pq.push({a,b});
    }

    while(!pq.empty())
    {
        cout<<pq.top().first<<" "<<pq.top().second<<endl;
        pq.pop();
    }
    return 0;
}