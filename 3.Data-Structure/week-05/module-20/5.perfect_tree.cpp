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



int max_height(node *root)
{
    if(root==NULL)  return 0;
    int l=max_height(root->left);
    int r=max_height(root->right);
    return max(l,r)+1;
}

int main()
{
    node* root=input_tree();
    int total_node=count(root);
    int h=max_height(root);

    //cout<<total_node<<"   "<<h<<endl;

    if(total_node==(pow(2,h))-1)
      cout<<"YES";
    else
      cout<<"NO";
    return 0;
}
