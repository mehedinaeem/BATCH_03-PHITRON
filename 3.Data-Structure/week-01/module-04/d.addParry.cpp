#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,x;
    cin>>m;
    vector<int>v(m);

    for(int i=0;i<m;i++)
    {
        cin>>v[i];
    }

    cin>>n;
    vector<int>v1(n);

    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }

    cin>>x;

    v.insert(v.begin()+x,v1.begin(),v1.end());
    for(int i=0;i<m+n;i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}