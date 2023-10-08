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

int s=0;

node* input_tree()
{
    int val;
    cin>>val;
    node *root;
    if(val==-1)
    {
        root=NULL;
    }
    else
    {
        root=new node(val);
    }

    queue<node*>q;
    q.push(root);

    while(!q.empty())
    {
        //ber kore ana
        node *p=q.front();
        q.pop();
        

        //all work
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

        p->left=myleft;
        p->right=myright;

        //push child
        if(p->left != NULL)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}

int sum(node *root)
{
    //int s=0; i have to declare the s globally
    if(root==NULL)
     {
        //cout<<"0";
        return 0;
     }

     s+=root->val;
     sum(root->left);
     sum(root->right);

     return s;
}

int main()
{
    node *root;
    root=input_tree();
    int result=sum(root);
    cout<<result<<endl;
    
    return 0;
}