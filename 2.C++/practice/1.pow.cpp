#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int result=pow(8,n);
    cout<<result+1<<endl;
    if(n==1)
        cout<<8<<endl;
    else
        cout<<result%10<<endl;
    return 0;
}