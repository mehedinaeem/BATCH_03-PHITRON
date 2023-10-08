#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    { int n;
    cin>>n;
    int oddcnt=0;
    int evencnt=0;

        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        
        if(a[i]%2==0)
        {
            evencnt++;
        }
        else
        {
            oddcnt++;
        }}
        if(oddcnt%2==1||evencnt>0&&oddcnt>0)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
}