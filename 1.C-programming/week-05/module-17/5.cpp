#include<bits/stdc++.h>
using namespace std;

void sum(int n,int x)
{
    int sum=0;
    if(x==n)
     {
        return;
     }
    else
   {
     sum+=x;
     cout<<sum;
     sum(n+1);
}
   }

int main()
{
    int n,a;
    cin>>n;
    sum(n,a);
    
    return 0;
}