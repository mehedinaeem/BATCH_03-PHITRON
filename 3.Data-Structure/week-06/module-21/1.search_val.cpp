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

//search in a tree
bool search(node *root,int x)
{
    if(root==NULL)   return false;
    if(root->val==x) return true;

    if(x<root->val)
       return search(root->left,x);
    else
       return search(root->right,x);
}

int main()
{
    node *root=input_tree();
    if(search(root,30)==true)
      cout<<"found the val"<<endl;
    else
      cout<<"Not find"<<endl;

    return 0;
}