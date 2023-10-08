#include<bits/stdc++.h>
using namespace std;

vector<int> v;

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

void level_order(node *root)
{
    queue<node*>q;
    q.push(root);

    while(!q.empty())
    {
        node *f=q.front();
        q.pop();

        //all work
        if(f->left==NULL && f->right==NULL)
            v.push_back(f->val);

        //push child
        if(f->left)
            q.push(f->left);

        if(f->right)
            q.push(f->right);
    }
}

int main()
{
    node *root;
    root=input_tree();
    level_order(root); // Populate the v vector
    sort(v.begin(),v.end());
    cout<<v.front()<<" "<<v.back();
    
    return 0;
}
