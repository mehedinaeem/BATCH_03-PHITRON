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
        <<"option 3: Terminate"<<endl;
        
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
            break;
        }
    }
    return 0;
}