#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char op;
    cin >> a >> op >> b;
    if (op == '>' && a > b)
        cout << "Right" << endl;
    else if (op == '>' && a < b)
        cout << "Wrong" << endl;

    else if (op == '<' && a < b)
        cout << "Right" << endl;
    else if (op == '<' && a > b)
        cout << "Wrong" << endl;
    else if (op == '=' && a == b)
        cout << "Right" << endl;
    else
        cout << "Wrong" << endl;
    return 0;
}