#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        set<int,greater<int>>s;
        

        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            s.insert(x);

        }

        for(auto it=s.begin();it!=s.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}