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

set<int> v;

// O(1)
void insert_at_tail(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
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

    // insert in head by O(1)
    newnode->next = head;
    head = newnode;

    cout << *v.begin() << endl;
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
    if (!v.empty())
        cout << *v.begin() << endl;
    else
        cout << "Empty" << endl;
}

void delete_min_and_print_min(node *&head)
{
    v.erase(v.begin());

    if (v.size() == 0)
        cout << "Empty" << endl;
    else
        cout << *v.begin() << endl;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.insert(val);
        insert_at_tail(head, tail, val);
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
            v.insert(x);
            // sort(v.begin(),v.end());
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