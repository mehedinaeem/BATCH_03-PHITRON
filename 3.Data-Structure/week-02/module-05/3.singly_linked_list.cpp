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
        this->next = next;
    }
};

int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *d = new node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }

    return 0;
}