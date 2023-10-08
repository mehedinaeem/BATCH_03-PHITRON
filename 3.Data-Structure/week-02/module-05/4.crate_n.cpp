#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
       int val;
       node* pore;
};

int main()
{
    node a,b;
    a.val=10;
    b.val=20;

    a.pore=&b;
    
    cout<<a.val<<endl<<a.pore->val<<endl<<(*a.pore).val<<endl;

    return 0;
}