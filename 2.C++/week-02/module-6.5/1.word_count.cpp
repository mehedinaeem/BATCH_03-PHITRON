#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    //cout<<s;
    stringstream ss(s);
    string word;
    int count=0;
    while(ss>>word)
    {
        int flag=0;
        for(int i=0;i<word.length();i++)
        {
            if((word[i]>=65 && word[i]<=90)||(word[i]>=97 && word[i]<=122))
            flag++;
        }
        if(flag>0)
        count++;
    }
    cout<<count<<endl;

    return 0;
}