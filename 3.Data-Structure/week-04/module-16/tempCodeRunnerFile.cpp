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
        sz--;
        node *deletenode=tail;
        tail=tail->prev;
        if(tail==NULL)
        {
            head=NULL;
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

int main()
{
    my_stack st;
    int a,b;
    cin>>a>>b;
    for(int i=0;i<a;i++)