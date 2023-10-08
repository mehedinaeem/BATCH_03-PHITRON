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
    tmp->next = newnode;
}

int size(node *head)
{
    int flag=0;
    node *tmp = head;
    while (tmp != NULL)
        
    {
        flag++;
        tmp = tmp->next;
    }
    return flag;
}

void check(node *head1, node *head2)
{
    int count = 0;
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->val != head2->val)
            count++;

        head1 = head1->next;
        head2 = head2->next;
    }
    if (size(head1) == size(head2))
    {
        if (count == 0)
            cout << "YES";
        else
            cout << "NO";
    }
    else
    cout<<"NO";
}

// void print(node *head)
// {
//    node *tmp=head;
//    while(tmp != NULL)
//    {
//     cout<<tmp->val<<" ";
//     tmp=tmp->next;
//    }
//    cout<<endl;
// }

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;

    // 1st linked lsit
    while (true)
    {

        int v;
        cin >> v;
        if (v == -1)
            break;
        else
            insert_at_tail(head1, v);
    }
    // print(head1);

    // 2nd linked list
    while (true)
    {

        int v;
        cin >> v;
        if (v == -1)
            break;
        else
            insert_at_tail(head2, v);
    }
    // print(head2);
    check(head1, head2);

    return 0;
}