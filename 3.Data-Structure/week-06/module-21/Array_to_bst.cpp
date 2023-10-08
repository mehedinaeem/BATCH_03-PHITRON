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

//array to bst
node *convert(int ar[],int n,int l,int r)
{
    //base case
    if(l>r)
    {
        return NULL;
    }

    int mid=(l+r)/2;
    node *root=new node(ar[mid]);
    node *left_root=convert(ar,n,l,mid-1);
    node *right_root=convert(ar,n,mid+1,r);

    root->left=left_root;
    root->right=right_root;
}



int main()
{
    
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    node *root=convert(ar,n,0,n-1);
    level_order(root);

    return 0;
}