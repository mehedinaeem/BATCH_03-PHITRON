#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    ll fib[n+1];
    fib[0]=1;
    fib[1]=1;

    for(int i=2;i<=n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    cout<<fib[n]<<endl;

    return 0;
}