#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    stringstream ss(s);
    string word;
    int count=0;
    while(ss>>word)
    {
        count++;
        if(count>1) cout<<" ";
        
        for(int i=word.length()-1;i>=0;i--)
        {
            cout<<word[i];
        }
       // cout<<" ";
    }
    
    return 0;
}