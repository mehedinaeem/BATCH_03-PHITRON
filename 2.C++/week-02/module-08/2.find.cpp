#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int count=0;
    for(int i=0;i<s.length()-4;i++)
    {
        if(s[i]=='R'&&s[i+1]=='a'&&s[i+2]=='t'&&s[i+3]=='u'&&s[i+4]=='l')
        {
            count++;
        }
       
        //cout<<s[i];
    }
    if(count>0)
        cout<<"YES"<<endl;

     else
        cout<<"NO"<<endl;
    //cout<<s;

    return 0;
}