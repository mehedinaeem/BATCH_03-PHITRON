#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int>>q;
    while(true)
    {
        int c;
        cin>>c;
        if(c==0)
        {
            int x;
            cin>>x;
            q.push(x);
        }

        else if(c==1)
        {
            q.pop();
        }
        else if(c==2)
        {
            cout<<q.top()<<endl<<endl;
        }
        else 
        {
            break;
        }
    }
    return 0;
}