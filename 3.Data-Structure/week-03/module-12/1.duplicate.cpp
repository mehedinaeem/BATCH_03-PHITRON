#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int val;
        node *next;

    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

void insert_at_tail(node *&head,int v);
//void duplicate();
void print(node *head);

void insert_at_tail(node *&head,int v)
{
    node *newnode=new node(v);

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

void print(node *head)
{
    node *tmp=head;
    while(tmp !=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;

   
    cout<<ar(head);
}

int sort_ll(node *head)
{
    vector<int>v;
    node *tmp=head;
    while(tmp !=NULL)
    {
        v.push_back(tmp->val);
        tmp=tmp->next;
    }
    vector<int>v2;
    v2=sort(v.begin(),v.end());
    return v2;
}



int main()
{
    node *head=NULL;

    while(true)
    {
        int v;
        cin>>v;
        if(v==-1)
           break;
        else
           insert_at_tail(head,v);
    }
    print(head);
    return 0;
}