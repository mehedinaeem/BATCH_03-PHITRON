#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int k=a.length();
    int j=b.length();
    for(int i=0;i<j;i++)
    {
        a[k]=b[i];
        k++;
    }
    //output -> bat ball=batball
    for(int i=0;i<j+k-1;i++)
    {
        cout<<a[i];
    }
    

    //another type: bat ball=batball ball
    // work with charecter
    //cout<<a<<b;
    //or strcat use
    return 0;
}