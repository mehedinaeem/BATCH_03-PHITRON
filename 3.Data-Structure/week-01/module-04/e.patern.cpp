#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n/2;i++)
    {
        //space
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        //back slash
       for(int j=i;j<=i;j++)
        {
            cout<<"\\";
        }
        //middle space
         for(int j = 0; j < (n - 2*i - 2); j++)
        {
            cout<<" ";
        }
        //back slash
         for(int j=i;j<=i;j++)
        {
            cout<<"/";
        }
        cout<<endl;
    }
    //middle x
    for(int i=0;i<n/2;i++)
    {
        cout<<" ";
    }
    cout<<"X"<<endl;

    
    //lower part
    for(int i=0;i<n/2;i++)
    {
        //space
        for(int j=n/2;j>i+1;j--)
        {
            cout<<" ";
        }
        //front slash
       for(int j=i;j<=i;j++)
        {
            cout<<"/";
        }
        //middle space
         for(int j=0; j<1+(2*i);j++)
        {
            cout<<" ";
        }
        //back slash
         for(int j=i;j<=i;j++)
        {
            cout<<"\\";
        }
        cout<<endl;
    }
    return 0;
}