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
void insert_at_tail(node *&head, int v)
{
    node *newnode = new node(v);
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
    // tmp in last node
    tmp->next = newnode;
}

void print_linked_list(node *head)
{
    cout<<"The likned list: ";
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int main()
{
    node *head = NULL;

    cout << "option 1: Insert at Tail:" << endl;
    cout << "option 2: Print the linked list:" << endl;
    cout << "option 3: Terminate:" << endl;

    while (true)
    {
        cout<<"Enter option:";
        int op;
        cin >> op;
        if (op == 1)
        {
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
            break;
    }

    return 0;
}