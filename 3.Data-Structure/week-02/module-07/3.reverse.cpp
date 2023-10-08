#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *next;

    //constructor
    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

void insert_at_tail(node *&head,int val)
{
     node *newnode=new node(val);

     if(head==NULL)
     {
        head=newnode;
        return;
     }
     node *tmp=head;
     while(tmp->next != NULL)
     {
        tmp=tmp->next;
     }
     tmp->next=newnode;
}

void print_recursion(node *n)
{
    if(n==NULL)
    {
        return;
    }
    cout<<n->val<<" ";
    print_recursion(n->next);
    
}

void print_reverse(node *n)
{
    if(n==NULL)
    {
        return;
    }
    print_reverse(n->next);
    cout<<n->val<<" ";
    
}

int main()
{
    node *head=NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        else 
        {
            insert_at_tail(head,val);
        }
    }

    print_recursion(head);
    cout<<endl;
    print_reverse(head);

    return 0;
}