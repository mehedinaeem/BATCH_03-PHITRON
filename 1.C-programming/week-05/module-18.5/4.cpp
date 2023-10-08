#include<bits/stdc++.h>
using namespace std;

void even(int a[],int n)
{
    
    if(n%2==0)
    {
        for(int i=n;i>=0;i-=2)
        {
            cout<<a[i]<<" ";
        }
    }
    else
    {
        for(int i=n-1;i>0;i-=2)
        {
            cout<<a[i]<<" ";
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    even(ar,n);
    return 0;
}