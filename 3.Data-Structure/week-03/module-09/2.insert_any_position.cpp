#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
       int val;
       node *next;
       node *prev;

    //constrictor
    node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insert_at_any_position(node *head,int pos,int val)
{
    node *newnode=new node(val);
    node *tmp=head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
    }
    //cout<<tmp->val;

    newnode->next=tmp->next;
    tmp->next=newnode;

    newnode->next->prev=newnode;
    newnode->prev=tmp;
}

int size(node *head)
{
    node *tmp=head;
    int count=0;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}

void print_normal(node *head)
{
    node *tmp=head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void print_rev(node *tail)
{
    node *tmp=tail;
    while(tail != NULL)
    {
        cout<<tail->val<<" ";
        tail=tail->prev;
    }
    cout<<endl;
}

int main()
{
    node *head=new node(10);
    node *a=new node(20);
    node *b=new node(30);
    node *c=new node(40);
    node *tail=c;

    //connection
    head->next=a;
    a->prev=head;

    a->next=b;
    b->prev=a;

    b->next=c;
    c->prev=b;

    int pos;
    cout<<"Enter pos: ";
    cin>>pos;
    if(pos>0 && pos< size(head))
        {
            insert_at_any_position(head,pos,100);
            print_normal(head);
            print_rev(tail);
        }
    else if(pos<0)
        cout<<"at now not possible"<<endl;
    else if(pos>=size(head))
        cout<<"at now not possible"<<endl;

    

    return 0;
}