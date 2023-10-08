#include<bits/stdc++.h>
using namespace std;

void hello()
{
    cout<<"hello"<<endl;
    cout<<"hello end"<<endl;
}
void world()
{
    cout<<"world"<<endl;
    hello();
    cout<<"world end"<<endl;
}

int main()
{
    cout<<"main start"<<endl;
    world();
    hello();
    cout<<"end main"<<endl;

    return 0;
}