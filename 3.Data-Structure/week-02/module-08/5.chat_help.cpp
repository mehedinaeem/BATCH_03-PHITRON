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

void insert_at_tail(node*& head, node*& tail, int v);
void insert_at_head(node*& head, int v);
void print(node* head);

void insert_at_tail(node*& head, node*& tail, int v) {
    node* newnode = new node(v);

    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void insert_at_head(node*& head, int v) {
    node* newnode = new node(v);
    newnode->next = head;
    head = newnode;
}

void print(node* head) {
    if (head == NULL) {
        cout << "Empty list" << endl;
        return;
    }

    node* tmp = head;
    while (tmp != NULL) {
        tmp = tmp->next;
    }

    cout << head->val << " ";
    if (tmp != NULL) {
        cout << tmp->val;
    } else {
        cout << "Empty list";
    }
    cout << endl;
}

int main() {
    node* head = NULL;
    node* tail = NULL;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int op, v;
        cin >> op;
        if (op == 0) {
            cin >> v;
            insert_at_head(head, v);
        } else if (op == 1) {
            cin >> v;
            insert_at_tail(head, tail, v);
        }

        print(head);
    }

    return 0;
}
