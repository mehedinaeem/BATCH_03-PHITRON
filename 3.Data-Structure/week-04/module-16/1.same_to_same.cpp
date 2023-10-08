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

class my_stack
{
   public:
      node *head=NULL;
      node *tail=NULL;
      int sz=0;

      void push(int val)
      {
        sz++;
        node *newnode=new node(val);

        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        newnode->prev=tail;
        tail->next=newnode;
        tail=tail->next;
      }

      void pop()
      {
        sz--;
        node *deletenode=tail;
        tail=tail->prev;
        if(tail==NULL)
        {
            head=NULL;
        }
        else
        {
            tail->next=NULL;
        }
        delete deletenode;
      }

      int top()
      {
        return tail->val;
      }

      int size()
      {
          return sz;
      }

      bool empty()
      {
        return sz == 0;
      }
};

class my_queue
{
    public:
       node *head=NULL;
       node *tail=NULL;
       int sz2=0;

    void push(int val)
    {
        sz2++;
        node *newnode=new node(val);

         if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        tail=tail->next;
    }

    void pop()
    {
        sz2--;
        node *deletenode=head;
        head=head->next;
        delete deletenode;
    }

    int front()
    {
        return head->val;
    }

    int size()
    {
        return sz2;
    }

    bool empty()
    {
        if(sz2==0)
           return true;
        else
           return false;
    }
};

int main()
{
    my_stack(st);
    my_queue(qu);
    int a,b;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    //cout<<st.size()<<endl;
   vector<int>v1;
   while(!st.empty())
   {
    //cout<<st.top()<<endl;
    v1.push_back(st.top());
    st.pop();
   }
   //cout<<st.size();

   //cout<<"queue"<<endl;
   for(int i=0;i<b;i++)
   {
       int x;
       cin>>x;
       qu.push(x);
   }

   vector<int>v2;
   while(!qu.empty())
   {
    //cout<<qu.front()<<endl;
    v2.push_back(qu.front());
    qu.pop();
   }
    
   if(v1==v2)
     cout<<"YES";
   else
     cout<<"NO";
    
    return 0;
}
