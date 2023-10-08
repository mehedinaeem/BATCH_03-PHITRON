#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=10;
    int *p=&x;
    cout<<p<<endl;
    cout<<&x<<endl;
    cout<<*p<<endl;
    x=1000;
    cout<<*p<<endl;
    return 0;
}