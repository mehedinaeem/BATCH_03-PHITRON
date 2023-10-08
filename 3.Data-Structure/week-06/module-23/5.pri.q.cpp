#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int>q;
    for(int i=0;i<5;i++)
    {
        int x;
        cin>>x;
        q.push(x);
        
    }
    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    return 0;
}