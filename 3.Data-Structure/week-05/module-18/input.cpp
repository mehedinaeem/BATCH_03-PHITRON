#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node* left;
    node* right;

    //constructor
    node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

node* input_tree()
{
    int val;
    cin >> val;
    if (val == -1)
        return NULL;
    
    node* root = new node(val);
    queue<node*> q;
    q.push(root);

    while (!q.empty())
    {
        node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1)
        {
            p->left = new node(l);
            q.push(p->left);
        }

        if (r != -1)
        {
            p->right = new node(r);
            q.push(p->right);
        }
    }
    return root;
}

void level_order(node* root)
{
    if (root == NULL)
        {
            cout<<"no tree";
            return;
        }

    queue<node*> q;
    q.push(root);

    while (!q.empty())
    {
        node* f = q.front();
        q.pop();

        cout << f->data << " ";

        if (f->left)
            q.push(f->left);

        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    node* root = input_tree();
    level_order(root);
    return 0;
}
