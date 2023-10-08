#include<bits/stdc++.h>
using namespace std;

class my_stack
{
  public:
    vector<int>v;

    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        if(v.size()==0) return true;
        else   return false;
    }
};

int main()
{
    my_stack(st);
    
    return 0;
}