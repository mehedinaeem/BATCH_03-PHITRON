#include<bits/stdc++.h>
using namespace std;

void fun(int ar[],int n,int i)
{
    if(i==n)   return;
    cout<<ar[i]<<endl;
    fun(ar,n,i+1);
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
    fun(ar,n,0);
    return 0;
}