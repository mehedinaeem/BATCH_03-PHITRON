#include<bits/stdc++.h>
using namespace std;

class node 
{
    public:
       int val;
       node *left;
       node *right;

    //constructor
      node(int val)
      {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
      }
};

node *input_tree()
{
    int val;
    cin>>val;
    node *root;
    if(val==-1)
        root=NULL;
    else
        root=new node(val);

    queue<node*>q;
    if(root)
       q.push(root);

    while(!q.empty())
    {
        node *f=q.front();
        q.pop();

        //all work
        int l,r;
        cin>>l>>r;
        node *myleft;
        node *myright;

        if(l==-1)
            f->left=NULL;
        else
           f->left=new node(l);

        if(r==-1)
           f->right=NULL;
        else
           f->right=new node(r);


       //push child
       if(f->left)
          q.push(f->left);
        if(f->right)
          q.push(f->right); 
    }
    return root;
}

void print_level(node *root,int x)
{
    if(root==NULL) 
    {
        cout<<"Invalid";
        return;
    }
    int higest_lavel=0;
    queue<pair<node*,int>>q;
    q.push({root,0});

    while(!q.empty())
    {
        pair<node*,int>pr=q.front();
        node *n=pr.first;
        int level=pr.second;
        q.pop();

        int p,l;
        l=level;

        //all work
        higest_lavel=max(level,higest_lavel);

        if(x==level)
        {
            cout<<n->val<<" ";
            //return;
        }



        //child push
        if(n->left)
            q.push({n->left,level+1});
        if(n->right)
            q.push({n->right,level+1});
    }
    if(x>higest_lavel)
       cout<<"Invalid";
}

int main()
{
    node *root;
    root=input_tree();
    int x;
    cin>>x;
    print_level(root,x);
    
    return 0;
}