#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e5+7;

int main()
{
    int n;
    cin>>n;
    ll fibo[N];
    fibo[0]=1;
    fibo[1]=1;
    for(int i=2;i<=n;i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    cout<<fibo[n]<<endl;
    return 0;
}