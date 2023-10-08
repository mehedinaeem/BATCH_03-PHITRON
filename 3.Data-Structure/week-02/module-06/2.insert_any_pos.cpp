#include <bits/stdc++.h>
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
void insert_at_tail(node *&head, int v)
{
    node *newnode = new node(v);

    while (head == NULL)
    {
        head = newnode;
        return;
    }

    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp is the last node
    tmp->next = newnode;
}

void print_linked_list(node *head)
{
    node *tmp = head;
    cout<<"The linked list is: ";
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

    cout << "option 1:Insert at tail: " << endl;
    cout << "option 2:Print the linked list: " << endl;
    cout << "option 1:Terminate: " << endl;

    
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
            print_linked_list(head);

        else if (op == 3)
            break;
    }

    return 0;
}