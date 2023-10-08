#include<bits/stdc++.h>
using namespace std;

void devide(int ar[],int l,int h)
{
    //if(l==h)  return;

    for(int i=l;i<=h;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    
    if(l<h)
    {
        int mid=(l+h)/2;
        devide(ar,l,mid);
        devide(ar,mid+1,h);
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
    devide(ar,0,n-1);
    return 0;
}