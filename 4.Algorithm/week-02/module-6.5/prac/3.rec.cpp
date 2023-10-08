#include<bits/stdc++.h>
using namespace std;

void rev(int n,int m)
{
    if(n>m) return;
    
    rev(n+1,m);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
    rev(1,n);
    return 0;
}