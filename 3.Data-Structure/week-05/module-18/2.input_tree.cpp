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

void levelorder(node* root)
{
    if (root == NULL)
    {
        cout << "No tree" << endl;
        return;
    }
    queue<node*> q;
    q.push(root);

    while (!q.empty())
    {
        //ber kore ana
        node* f = q.front();
        q.pop();

        //jabitiyo ja kaj ache
        cout << f->val << " ";

        //child gulo ke rakha
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    node* root = input_tree();
    cout<<endl;
    levelorder(root);
    return 0;
}
