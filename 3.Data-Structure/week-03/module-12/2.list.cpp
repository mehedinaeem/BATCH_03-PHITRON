#include<bits/stdc++.h>
using namespace std;

void insert_at_tail(list<int> &mylist, int v);
void remove_duplicates(list<int> &mylist);
void print(const list<int> &mylist);

void insert_at_tail(list<int> &mylist, int v)
{
    mylist.push_back(v);
}

void remove_duplicates(list<int> &mylist)
{
    mylist.sort();
    mylist.unique();
}

void print(list<int> &mylist)
{
    for (int val : mylist) {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    list<int>mylist;

    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        else
            insert_at_tail(mylist, v);
    }

    remove_duplicates(mylist);
    print(mylist);

    return 0;
}
