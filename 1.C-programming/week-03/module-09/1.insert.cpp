//deletion

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<"Before insert: ";
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter which index u insert & value:"<<endl;
    int in,val;
    cout<<"index: ";
    cin>>in;
    cout<<"value: ";
    cin>>val;
    cout<<"After insert: ";
    // for(int i=0;i<=n;i++)
    // {
    //     if(n-i-1>=in)
    //     {
    //         ar[n]=ar[n-i-1];
    //     }
    //     else if(n-i-1==in)
    //     ar[in]=val;

    // }
    ar[in]=val;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}