#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[100], b[100];
    cin >> a >> b;
    int v = strcmp(a, b);
    //cout << v;
    if (v < 0)
        cout << a << endl;
    else if (v > 0)
        cout << b << endl;
    else if(v==0)
        cout << b << endl;
    return 0;
}