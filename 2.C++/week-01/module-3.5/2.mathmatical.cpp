#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    char op1,op2;
    cin>>a>>op1>>b>>op2>>c;
    if(op1=='+' && a+b==c)
    cout<<"Yes"<<endl;
    else if(op1=='+' && a+b!=c)
    cout<<a+b<<endl;
    if(op1=='-' && a-b==c)
    cout<<"Yes"<<endl;
    else if(op1=='-' && a-b!=c)
    cout<<a-b<<endl;
    if(op1=='*' && a*b==c)
    cout<<"Yes"<<endl;
    else if(op1=='*' && a*b!=c)
    cout<<a*b<<endl;
    return 0;
}