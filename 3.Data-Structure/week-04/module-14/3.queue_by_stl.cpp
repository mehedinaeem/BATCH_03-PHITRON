#include<bits/stdc++.h>
using namespace std;

class my_queue
{
    public:
      list<int>l;

    void push(int v)
    {
        l.push_back(v);
    }

    void pop()
    {
        l.pop_front();
    }

    int front()
    {
        return l.front();
    }
  
    int size()
    {
        return l.size();
    }

    bool empty()
    {
        if(l.size()==0) return true;
        else    return false;
    }
};

int main()
{
    my_queue(q);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}