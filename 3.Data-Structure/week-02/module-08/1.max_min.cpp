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



// void print(node *head)
// {
//    node *tmp=head;
//    while(tmp != NULL)
//    {
//     cout<<tmp->val<<" ";
//     tmp=tmp->next;
//    }
//    cout<<endl;
// }


void max_print(node *head)
{
    int max=INT_MIN;
    int min=INT_MAX;
   node *tmp=head;
   while(tmp != NULL)
   {
     if(tmp->val>max)
     max=tmp->val;

     if(tmp->val<min)
     min=tmp->val;

     tmp=tmp->next;

   }

   
   cout<<max<<" "<<min;
}

int main()
{
    node *head=NULL;
    // cout<<"option 1:insert at tail"<<endl;
    // cout<<"option 2:print:"<<endl;
    // cout<<"option 0:terminate:"<<endl;

    while(true)
    {
        // int op;
        // cin>>op;

        // if(true)
        // {
        //     int v;
        //     cin>>v;
        //     insert_at_tail(head,v);
        // }
        // else if(op==2)
        // print(head);

        int v;
        cin>>v;
        if(v==-1)
        break;
        else
        insert_at_tail(head,v);

        // else if(op==-1)
        // break;
    }
    max_print(head);
    
    return 0;
}