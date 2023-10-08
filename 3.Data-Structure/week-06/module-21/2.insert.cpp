#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
       int val;
       node *left=NULL;
       node *right=NULL;

       //constructor

       node(int val)
       {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
       }
};

//input
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
    if(root)   q.push(root);

    while(!q.empty())
    {
        //1.ber kore ana
        node *f=q.front();
        q.pop();

        
        //2.all work
        int l,r;
        cin>>l>>r;
        node *myleft;
        node *myright;

        if(l==-1)
           myleft=NULL;
        else
           myleft=new node(l);

        if(r==-1)
           myright=NULL;
        else
           myright=new node(r);

        //connection
        f->left=myleft;
        f->right=myright;


        //push child
        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
           
    }
    return root;

}

void level_order(node *root)
{
    if(root==NULL)
    {
        cout<<"No node here";
        return;
    }

    queue<node*>q;
    q.push(root);

    while(!q.empty())
    {
        node *f=q.front();
        q.pop();

        cout<<f->val<<" ";

        if(f->left)
           q.push(f->left);
        if(f->right)
           q.push(f->right);
    }
}

void insert(node *root,int x)
{
    if(root==NULL)
    {
        root=new node(x);
        return;
    }

    if(x<root->val)
    {
        if(root->left==NULL)
            root->left=new node(x);
        else
            insert(root->left,x);
    }

    else
    {
        if(root->right==NULL)
            root->right=new node(x);
        else
            insert(root->right,x);
    }
}



int main()
{
    node *root=input_tree();

    cout<<"Befor insert: ";
    level_order(root);
    cout<<endl;

    // cout<<"Enter value: ";
    // int x;
    // cin>>x;
    cout<<"After insert: ";

    insert(root,5);
    insert(root,25);
    insert(root,50);
    level_order(root);
   

    return 0;
}