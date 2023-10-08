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

void insert_at_tail(node *&head, int v);
void sort_linked_list(node *&head);
void duplicate(node *&head);
void print(node *head);

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
    tmp->next = newnode;
}


void duplicate(node *&head)
{
    if(head==NULL)  return;
    
    node *tmp=head;
    while(tmp->next != NULL)
    {
    if(tmp->val==tmp->next->val)
        tmp->next=tmp->next->next;

    if(tmp->next==NULL)  break;

    else if(tmp->val != tmp->next->val)
        tmp=tmp->next;
    }
    return;
}

void sort_linked_list(node *&head)
{
    vector<int> v;
    node *tmp = head;
    while (tmp != NULL)
    {
        v.push_back(tmp->val);
        tmp = tmp->next;
    }

    sort(v.begin(), v.end());

    tmp = head;
    int i = 0;
    while (tmp != NULL)
    {
        tmp->val = v[i];
        tmp = tmp->next;
        i++;
    }
}

void print(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
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

    sort_linked_list(head);
    duplicate(head);
    print(head);

    return 0;
}
