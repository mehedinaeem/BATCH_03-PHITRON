#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int val;
        node* next;

    //constructor
    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

void insert_at_position(node* head,int pos,int val);
int size(node* head);
void insert_head(node *&head,int val);
void insert_tail(node *&head,node *&tail,int val);
void print(node* head);

void insert_at_position(node* head,int pos,int val)
{
    node* newnode=new node(val);
    node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    //now temp in pos-1 location
    newnode->next=tmp->next;
    tmp->next=newnode;

}

int size(node* head)
{
    int count=0;
    node* tmp=head;
    while(tmp != NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
    //cout<<count<<endl;
}

void insert_head(node *&head,int val)
{
    node *newnode=new node(val);
    newnode->next=head;
    head=newnode;
}

void insert_tail(node *&head,node *&tail,int val)
{
    node *newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}

void print(node* head)
{
    node* tmp=head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

int main()
{
    node* head=new node(10);
    node* a=new node(20);
    node* b=new node(30);
    node* c=new node(40);
    node* d=new node(50);
    node* tail=d;

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=NULL;

    //size(head);
    cout<<"Before Insert:";
    print(head);
    cout<<tail->val<<endl;

    cout<<"Enter pos & val:";
    int pos,val;
    cin>>pos>>val;
    if(pos>size(head))
    {
        cout<<"invalid index"<<endl;
    }
    else if(pos==0)
    {
        insert_head(head,val);
    }
    else if(pos==size(head))
    {
        insert_tail(head,tail,val);
    }
    else
    {
        insert_at_position(head,pos,val);
    }
    
    cout<<"After Insert:";
    print(head);
    cout<<tail->val<<endl;


    return 0;
}