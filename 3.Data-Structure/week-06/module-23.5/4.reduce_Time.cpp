#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int val;
    node* next;

    node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(node*& head, node*& tail, int val);
void insert_and_print_min(node*& head, int x);
void print_min();
void delete_min_and_print_min(node*& head);

priority_queue<int, vector<int>, greater<int>> v;

void insert_at_tail(node*& head, node*& tail, int val) {
    node* newnode = new node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void insert_and_print_min(node*& head, int x) {
    node* newnode = new node(x);
    if (head == NULL) {
        head = newnode;
        cout << x << endl;
        return;
    }

    newnode->next = head;
    head = newnode;

    cout << v.top() << endl;
}

void print_min() {
    if (v.size() == 0) {
        cout << "Empty" << endl;
    }
    else {
        cout << v.top() << endl;
    }
}

void delete_min_and_print_min(node*& head) {
    v.pop();
    print_min();
}

int main() {
    node* head = NULL;
    node* tail = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        v.push(val);
        insert_at_tail(head, tail, val);
    }

    int q;
    cin >> q;
    while (q--) {
        int op;
        cin >> op;
        if (op == 0) {
            int x;
            cin >> x;
            v.push(x);
            insert_and_print_min(head, x);
        }
        else if (op == 1) {
            print_min();
        }
        else if (op == 2) {
            delete_min_and_print_min(head);
        }
    }
    return 0;
}
