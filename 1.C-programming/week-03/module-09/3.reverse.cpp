#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int temp;
    for(i=0,j=n-1;i<j,j>=i;i++,j--)
    {
        temp=ar[i];
        ar[i]=ar[j];
        ar[j]=temp;
        //cout<<ar[i]<<" ";
    }
    for(int j=0;j<n;j++)
    {
       cout<<ar[j]<<" ";
    }

    return 0;
}