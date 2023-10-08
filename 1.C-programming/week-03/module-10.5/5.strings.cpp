#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a,b;
    string s1,s2;
    cin>>s1>>s2;
    cout<<s1.length()<<" "<<s2.length()<<endl;
    cout<<s1+s2<<endl;
    for(int i=0;i<s1.length();i++)
    {
        a=s1[0];
    }

    for(int i=0;i<s2.length();i++)
    {
        b=s2[0];
    }

    for(int i=0;i<s1.length();i++)
    {
        s1[0]=b;
        cout<<s1[i];
    }
    cout<<" ";
    for(int i=0;i<s2.length();i++)
    {
        s2[0]=a;
        cout<<s2[i];
    }
    return 0;
}