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

// void check(node *head1, node *head2)
// {
//     int count = 0;
//     while (head1 != NULL && head2 != NULL)
//     {
//         if (head1->val != head2->val)
//             count++;

//         head1 = head1->next;
//         head2 = head2->next;
//     }
//     if (size(head1) == size(head2))
//     {
//         if (count == 0)
//             cout << "YES";
//         else
//             cout << "NO";
//     }
//     else
//     cout<<"NO";
// }


void make_array(node *head)
{
   int ar[size(head)];
   int i=0,count=0;
   node *tmp=head;
   while(tmp != NULL)
   {
    //cout<<tmp->val<<" ";
    ar[i]=tmp->val;
    //cout<<ar[i]<<" ";
    i++;
    tmp=tmp->next;
    count++;
   }
   sort(ar,ar+size(head));
   

//    for(int i=0;i<count;i++)
//    {
//        cout<<ar[i]<<" ";
//    }

   if(count%2 != 0)
    cout<<ar[(count-1)/2];
   else
    cout<<ar[count/2]<<" "<<ar[(count-1)/2];
}



int main()
{
    node *head = NULL;
    //node *head2 = NULL;

    // 1st linked lsit
    while (true)
    {

        int v;
        cin >> v;
        if (v == -1)
            break;
        else
            insert_at_tail(head, v);
    }
    make_array(head);

    return 0;
}