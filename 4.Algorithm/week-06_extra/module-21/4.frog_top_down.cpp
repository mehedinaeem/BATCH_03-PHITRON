#include<bits/stdc++.h>
using namespace std;

const int N=1e5+7;
int dp[N];

int frog(int a[],int n)
{
    if(n==1)
    {
        return 0;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    else if(n==2)
    {
        return dp[n]=abs(a[2]-a[1]);
    }
    else
    {
        int choice1=frog(a,n-1)+abs(a[n]-a[n-1]);
        int choice2=frog(a,n-2)+abs(a[n]-a[n-2]);
        return dp[n]= min(choice1,choice2);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        dp[i]=-1;
    }
    frog(a,n);
    cout<<frog(a,n);

    return 0;
}