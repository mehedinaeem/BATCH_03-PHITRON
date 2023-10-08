#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,n;
        cin>>a>>b;
        n=(a%100)*(b%100);
        cout<<n%100<<endl;
    }
    
    return 0;
}