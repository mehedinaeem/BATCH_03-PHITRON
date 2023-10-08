#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
       int val;
       node *next;

       node(int data)
       {
        this->val=data;
        this->next=NULL;
       }
};

void print_LL(node *head)
{
    if(head==NULL)
       cout<<"No value";
    
    node *tmp=head;
    while(tmp->next != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}

int main()
{
    // node a,b;
    // a.val=10;
    // b.val=20;

    // node a(10);
    // node b(20);

    // a.next=&b;
    // //b.next=NULL;

    node *head=new node(10);
    node *a=new node(20);
    node *b=new node(30);
    
    head->next=a;
    a->next=b;
    b->next=NULL;

    print_LL(head);

    // cout<<a->val<<endl;
    // cout<<a->next->val<<endl;
    return 0;
}