#include<bits/stdc++.h>
using namespace std;

long long int sumarray(long long int a[],long long int x)
{
    if(x==0) return 0;
    else
    {
        return a[0]+sumarray(a+1,x-1);
    }
}

int main()
{
    long long int n;
    cin>>n;
    long long int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    long long int sum=sumarray(ar,n);
   cout<<sum;
    return 0;
}