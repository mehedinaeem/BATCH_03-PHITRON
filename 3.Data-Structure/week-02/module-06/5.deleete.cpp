#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
       int val;
       node *next;

    //comstructor
    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_tail(node *&head,int v);
void insert_at_any_pos(node *head,int pos,int v);
void insert_at_head(node *&head,int v);
void delete_from_pos(node *head,int pos);
void print_ll(node *head);

void insert_at_tail(node *&head,int v)
{
     node *newnode=new node(v);

     //corner case
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

void insert_at_any_pos(node *head,int pos,int v)
{
    node *newnode=new node(v);

    node *tmp=head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
}

void insert_at_head(node *&head,int v)
{
    node *newnode=new node(v);
    newnode->next=head;
    head=newnode;
}

void delete_from_pos(node *head,int pos)
{
    node *tmp=head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
    }
    node *deletenode=tmp->next;
    tmp->next=tmp->next->next;
    delete deletenode;
}

void print_ll(node *head)
{
    node *tmp=head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

int main()
{
    node *head=NULL;
    while(true)
    {
        cout<<"option 1: insert at tail: "<<endl
        <<"option 2: print linked list:"<<endl
        <<"option 3: insert at any position: "<<endl
        <<"option 4: insert at head: "<<endl
        <<"option 5: Delete node: "<<endl
        <<"option 0: Terminate"<<endl;
        
        int op;
        cin>>op;

        if(op==1)
        {
            int val;
            cout<<"Enter value: ";
            cin>>val;
            insert_at_tail(head,val);
        }
        else if(op==2)
        {
            print_ll(head);
        }
        else if(op==3)
        {
            int val,pos;
            cout<<"Enter position: ";
            cin>>pos;
            cout<<"Enter value: ";
            cin>>val;
            if(pos==0)
            {
                insert_at_head(head,val);
            }
            else
                insert_at_any_pos(head,pos,val);
        }
        else if(op==4)
        {
            int v;
            cout<<"Enter value: ";
            cin>>v;
            insert_at_head(head,v);
        }
        else if(op==5)
        {
            int pos;
            cout<<"Enter position: ";
            cin>>pos;
            delete_from_pos(head,pos);
        }
        else if(op==0)
        {
            break;
        }
    }
    return 0;
}