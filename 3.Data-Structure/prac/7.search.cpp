#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string a;
    while (true)
    {
        cin >> a;
        // cin.ignore();
        if (a == "end")
        {
            break;
        }
        insert_at_tail(head, tail, a);
    }

    int q;
    cin >> q;
    cin.ignore();

    Node *current = head;

    for (int i = 0; i < q; i++)
    {
        string s;
        cin >> s;
        stringstream ss(s);
        string word;
        ss >> word;
        if (word == "visit")
        {
            string address;
            ss >> address;
            bool found = false;
            Node *tmp = head;
            while (tmp != NULL)
            {
                if (tmp->val == address)
                {
                    found = true;
                    break;
                }
                tmp = tmp->next;
            }
            if (found)
            {
                current = tmp;
                cout << tmp->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (s == "next")
        {
            if (current->next != NULL)
            {
                current = current->next;
                cout << current->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (s == "prev")
        {
            if (current->prev != NULL)
            {
                current = current->prev;
                cout << current->val << endl;
            }

            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}