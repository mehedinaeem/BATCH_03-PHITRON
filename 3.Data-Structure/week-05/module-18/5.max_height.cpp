#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node* left;
    node* right;

    //constructor
    node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

node* input_tree()
{
    int val;
    cin >> val;
    node* root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new node(val);
    }

    queue<node*> q;
    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        //1.ber kore ano
        node* p = q.front();
        q.pop();

        //jabatiya kaj ja ache
        int l, r;
        cin >> l >> r;
        node* myleft;
        node* myright;

        if (l == -1)
            myleft = NULL;
        else
            myleft = new node(l);

        if (r == -1)
            myright = NULL;
        else
            myright = new node(r);

        //child gulo ke ber kore push
        p->left = myleft;
        p->right = myright;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

int count(node *root)
{
    if(root==NULL)   return 0;
    int l=count(root->left);
    int r=count(root->right);
    return l+r+1;
}

int leaf_count(node *root)
{
    if(root==NULL)  return 0;
    if(root->left==NULL && root->right==NULL)
    {
        return 1;
    }
    else
    {
        int l=leaf_count(root->left);
        int r=leaf_count(root->right);
        return l+r;
    }
}

int max_height(node *root)
{
    if(root==NULL)  return 0;
    int l=max_height(root->left);
    int r=max_height(root->right);
    return max(l,r)+1;
}

int main()
{
    cout<<endl;
    node* root=input_tree();
    cout<<endl<<"The number of node: ";
    cout<<count(root);
    cout<<endl<<"The numbe of leaf node: ";
    cout<<leaf_count(root);
    cout<<endl<<"max height: ";
    cout<<max_height(root);
    cout<<endl;
    return 0;
}
