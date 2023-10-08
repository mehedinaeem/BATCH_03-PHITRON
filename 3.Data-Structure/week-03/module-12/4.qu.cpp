#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
       int val;
       node *next;
       node *prev;

    //constructor
    node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insert_at_head(node *&head,int val);
void insert_at_pos(node *&head,int pos,int val);
int size(node *head);
void print_from_left(node *head);
void print_from_right(node *tail);

//function start from here

void insert_at_head(node *&head,node *&tail,int val)
{
    node *newnode=new node(val);

    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }

    head->prev=newnode;
    newnode->next=head;
    head=newnode;
}

void insert_at_pos(node *&head,node *&tail,int pos,int val)
{
    node *newnode=new node(val);
    node *tmp=head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;

    tmp->next->prev=newnode->next;
    newnode->prev=tmp;

    if(tmp==tail)
    {
        tail=newnode;
    }
}

int size(node *head)
{
    int count=0;
    node *tmp=head;
    while(tmp != NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}

void print_from_left(node *head)
{
    node *tmp=head;
    cout<<"L -> ";
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void reverse(node *n)
{
    //cout<<"R -> ";
    if(n==NULL)  return;

    reverse(n->next);
    cout<<n->val<<" ";
}

// void print_from_right(node *tail)
// {
//     node *tmp=tail;
//     cout<<"R -> ";
//     while(tmp != NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp=tmp->prev;
//     }
//     cout<<endl;
// }

int main()
{

    node *head=NULL;
    node *tail=NULL;

    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a==0)
        {
            insert_at_head(head,tail,b);
            print_from_left(head);
            cout<<"R -> ";
            reverse(head);
            cout<<endl;
        }
        else if(a>size(head))
        {
            cout<<"Invalid"<<endl;
        }
        else
        {
            insert_at_pos(head,tail,a,b);
            print_from_left(head);
            cout<<"R -> ";
            reverse(head);
            cout<<endl;
        }
           
    }
    return 0;
}