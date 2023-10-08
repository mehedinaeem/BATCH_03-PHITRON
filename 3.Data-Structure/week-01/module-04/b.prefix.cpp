#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    vector<long long int> v(n);
    vector<long long int> v1(n);
    long long int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum+=v[i];
        v1[i]=sum;
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<v1[i]<<" ";
    }
   
    
    return 0;
}