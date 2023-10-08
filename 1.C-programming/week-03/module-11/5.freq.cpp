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
    int count[9]={0};
    for(int i=0;i<n;i++)
    {
        int val=ar[i];
        count[val]++;
    }
    for(int i=0;i<n;i++)
    {
        if(count[i]>0)
        cout<<i<<"----"<<count[i]<<endl;
    }
    return 0;
}