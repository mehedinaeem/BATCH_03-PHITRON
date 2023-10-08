#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int x=abs(c-b)+c;
        if(a==x)
        {
            cout<<3<<endl;
        }
        else if(a<x)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }

    }
}
