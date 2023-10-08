#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0,sum1=0;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            sum+=a[i][j];
        }
    }
    //cout<<sum<<endl;;
     for(int i=0;i<n;i++)
    {
        for(int j=n-i-1;j>=0;j--)
        {
            sum1+=a[i][j];
            break;
        }
    }
    cout<<abs(sum-sum1)<<endl;
    return 0;
}