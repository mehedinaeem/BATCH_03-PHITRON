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

void insert_at_tail(node *&head, node *&tail, int v);
void insert_and_print_min(node *&head, int x);
void print_min(node *head);
void delete_min_and_print_min(node *&head);

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

void insert_and_print_min(node *&head, int x)
{
    int min = INT_MAX;
    // insertion part
    node *newnode = new node(x);
    {
        if (head == NULL)
        {

            head = newnode;
            min = head->val;
            cout << min << endl;
            return;
        }
    }

    //insert in head by O(1)
    newnode->next = head;
    head = newnode;

    // find min part

    node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val < min)
        {
            min = tmp->val;
        }
        tmp = tmp->next;
    }
    cout << min << endl;
}

// void print_link_list(node *head)
// {
//     node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
// }

void print_min(node *head)
{
    int min = INT_MAX;
    node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val < min)
        {
            min = tmp->val;
        }
        tmp = tmp->next;
    }
    cout << min << endl;
}

void delete_min_and_print_min(node *&head)
{
    // find the minimum)
    int min = INT_MAX;
    node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val < min)
        {
            min = tmp->val;
        }
        tmp = tmp->next;
    }

    // delete minimum
    node *prev = NULL;
    node *current = head;
    while (current != NULL && current->val != min)
    {
        prev = current;
        current = current->next;
    }

    if (current != NULL)
    {
        if (prev != NULL)
        {
            prev->next = current->next;
        }
        else
        {
            head = current->next;
        }
        delete current;
    }

    // Find the new minimum after deletion
    int new_min = INT_MAX;
    node *tmp1 = head;
    while (tmp1 != NULL)
    {
        if (tmp1->val < new_min)
        {
            new_min = tmp1->val;
        }
        tmp1 = tmp1->next;
    }

    // Print the new minimum
    if (head == NULL)
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << new_min << endl;
    }
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        insert_at_tail(head,tail, v);
    }

    // insert_and_print_min(head,5);
    // print_link_list(head);

    int q;
    cin >> q;
    while (q--)
    {
        int op;
        cin >> op;
        if (op == 0)
        {
            int x;
            cin >> x;
            insert_and_print_min(head, x);
        }
        else if (op == 1)
        {
            print_min(head);
        }
        else if (op == 2)
        {
            delete_min_and_print_min(head);
        }
    }
    return 0;
}