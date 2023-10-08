#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int>>p;
    //std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        p.push(x);
    }
    for(int i=0;i<n;i++)
    {
        cout<<p.top()<<" ";
        p.pop();
    }
    return 0;
}