#include <iostream>
#include <queue>

using namespace std;

class node
{
public:
    int val;
    node *prev;
    node *next;

    node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_at_tail(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
}

priority_queue<int, vector<int>, greater<int>> v;

void insert_and_print_min(node *&head, node *&tail, int x)
{
    node *newnode = new node(x);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
    cout << v.top() << endl;
}

void print_min()
{
    if (!v.empty())
        cout << v.top() << endl;
    else
        cout << "Empty" << endl;
}

void delete_min_and_print_min(node *&head, node *&tail)
{
    if (!v.empty())
    {
        v.pop(); // Corrected: Removed the argument from pop()

        // Remove the minimum node from the linked list
        if (head != NULL)
        {
            node *temp = head;
            head = head->next;
            if (head != NULL)
                head->prev = NULL;
            else
                tail = NULL;
            delete temp;
        }
    }

    print_min();
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
        v.push(val);
        insert_at_tail(head, tail, val);
    }

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
            v.push(x);
            insert_and_print_min(head, tail, x);
        }
        else if (op == 1)
        {
            print_min();
        }
        else if (op == 2)
        {
            delete_min_and_print_min(head, tail);
        }
    }
    return 0;
}
