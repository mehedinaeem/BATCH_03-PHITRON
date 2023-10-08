#include <iostream>
#include <vector>
using namespace std;

class node
{
public:
    int val;
    node *next;

    //constructor
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

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

void print_recursion(node *n, vector<int> &vec)
{
    if (n == NULL)
    {
        return;
    }
   // cout << n->val << " ";
    vec.push_back(n->val);
    print_recursion(n->next, vec);
}

void print_reverse(node *n,vector<int> &vec1)
{
    if (n == NULL)
    {
        return;
    }
    print_reverse(n->next,vec1);
    vec1.push_back(n->val);
    //cout << n->val << " ";
}

int main()
{
    node *head = NULL;
    node *tail=NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            insert_at_tail(head,tail, val);
        }
    }

    vector<int> vec;
    print_recursion(head, vec);
    //cout << endl;

    vector<int>vec1;
    print_reverse(head,vec1);
   
    // int count=0;
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     if(vec[i] != vec1[i])
    //       count++;
    // }
    // if(count==0)
    //     cout<<"YES";
    // else
    //     cout<<"NO";

    if(vec==vec1)
       cout<<"YES";
    else
       cout<<"NO";

    return 0;
}
