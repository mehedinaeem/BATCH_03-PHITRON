#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int count[m+1]={0};
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    
    for(int i=0;i<n;i++)
    {
        count[ar[i]]++;
    }
    for(int i=1;i<=m;i++)
    {
        cout<<count[i]<<endl;
    }
    return 0;
}