#include<bits/stdc++.h>
using namespace std;

vector<int>v;

class node
{
    public:
       int val;
       node *left;
       node *right;

       node(int val)
       {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
       }
};

node* input_tree()
{
    int val;
    cin>>val;
    node *root=NULL;
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

        int l,r;
        cin>>l>>r;
        node *myleft;
        node *myright;

        if(l==-1)   f->left=NULL;
        else   f->left=new node(l);

        if(r==-1)   f->right=NULL;
        else   f->right=new node(r);

        //child push
        if(f->left)
           q.push(f->left);
        
        if(f->right)
           q.push(f->right);
    }
    return root;
}

void level_order(node *root)
{
    queue<node*>q;
    q.push(root);

    while(!q.empty())
    {
        node *f=q.front();
        q.pop();

        //all work
        //cout<<f->val<<" ";
        v.push_back(f->val);


        //push child
        
        if(f->right)
           q.push(f->right);

         if(f->left)
           q.push(f->left);

    }
}

int main()
{
    node *root;
    root=input_tree();
    level_order(root);
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}