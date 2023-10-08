#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *next;

    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(node *&head, int val)
{
    node *newnode = new node(val);

    if (head == NULL)
    {
        head = newnode;
        return;
    }

    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}

vector<int> recursion(node *n)
{
    vector<int> v;
    if (n == NULL)
        return v;

    v = recursion(n->next);
    v.push_back(n->val);
    return v;
}

int main()
{
    node *head = NULL;

    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        else
            insert_at_tail(head, v);
    }

    vector<int> result = recursion(head);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
