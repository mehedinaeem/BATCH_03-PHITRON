#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *next;

    // constructor
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(node *&head, node *&tail, int v)
{
    node *newnode = new node(v);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

void reverse(node *head)
{
    if (head == NULL)
        return;

    reverse(head->next);
    cout << head->val << " ";
}

void print(node *head)
{
    if (head == NULL)
        return;

    cout << head->val << " ";
    print(head->next);
}

int main()
{
    node *head = NULL;
    node *tail=NULL;
    while (true)
    {

        int v;
        cin >> v;
        if (v == -1)
            break;
        else
            insert_at_tail(head,tail,v);
    }
    reverse(head);
    cout << endl;
    print(head);

    return 0;
}