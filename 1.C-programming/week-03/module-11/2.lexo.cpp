#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int i=0;
    while(1)
    {
        if(a[i]=='\0' && b[i]=='\0')
        {
            cout<<"same";
            break;
        }
        else if(a[i]=='\0')
        {
            cout<<a;
            break;
        }
        else if(b[i]=='\0')
        {
            cout<<b;
            break;
        }

        if(a[i]==b[i])
        {
            i++;
        }
        else if(a[i]<b[i])
        {
            cout<<a;
            break;
        }
        else
        {
            cout<<b;
            break;
        }

    }
    return 0;
}