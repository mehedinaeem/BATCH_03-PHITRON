#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void inset_at_tail(Node *&head, Node *&tail, int val);
void insert_at_tail(Node *&head, int val);
void print(Node *head);

void inset_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void inset_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void print(Node *head, Node *tail)
{
    if (head == NULL)
    {
        return;
        cout << head->val << " " << tail->val << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int op, val;
        cin >> op;
        if (op == 0)
        {
            cin >> val;
            inset_at_head(head, val);
            if (tail == NULL)
                tail == head;
        }
        else if (op == 1)
        {
            cin >> val;
            inset_at_tail(head, tail, val);
        }
        print(head, tail);
    }

    return 0;
}