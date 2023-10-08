#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[100], b[100];
    cin >> a >> b;
    int v = strcmp(a, b);
    cout << v<<endl;
    
    if (v < 0)
        cout << a;
    else if (v == 0)
        cout << "SAme";
    else
        cout << b;
    return 0;
}