#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,int n,string s2,int m)
{
    if(n==0 || m==0)
        return 0;

    if(s1[n-1] == s2[m-1])
    {
        int ans=lcs(s1,n-1,s2,m-1);
        return ans+1;
    }
    else
    {
        int ans1=lcs(s1,n-1,s2,m);
        int ans2=lcs(s1,n,s2,m-1);
        return max(ans1,ans2);
    }
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    // n=s1.size();
    // m=s2.size();

    cout<<lcs(s1,s1.size(),s2,s2.size())<<endl;

    return 0;
}