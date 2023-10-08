#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    stack<int>st;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    list<int>l1;
    while(!st.empty())
    {
        l1.push_back(st.top());
        st.pop();
    }

    queue<int>qu;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        qu.push(x);
    }

    list<int>l2;
    while(!qu.empty())
    {
        l2.push_back(qu.front());
        qu.pop();
    }
    if(l1==l2)
       cout<<"YES"<<endl;
    else
       cout<<"NO"<<endl;
    

    return 0;
}