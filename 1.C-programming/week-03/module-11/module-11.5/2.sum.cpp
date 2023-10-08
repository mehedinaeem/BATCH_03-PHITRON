#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char s[n];
    //getline(cin,s);
   // cout<<s;
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        sum+=s[i]-'0';
    }
    cout<<sum;
    return 0;
}