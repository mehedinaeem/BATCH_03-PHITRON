//swap the index not value

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,j,k;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int max=INT_MIN;
    int min=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
            j=i;
        }
        if(ar[i]<min)
        {
            min=ar[i];
            k=i;
        }
       
    }
    for(int i=0;i<n;i++)
    {
       ar[j]=min;
       ar[k]=max;
       cout<<ar[i]<<" ";
        
    }
    //cout<<max<<" "<<min;
    return 0;
}