// rigrt insertion

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cout << "position" << endl
         << "value" << endl;
    int pos, val;
    cin >> pos >> val;
    for (int i = n; i >= pos + 1; i--)
    {
        ar[i] = ar[i - 1];
    }
    ar[pos] = val;
    for (int i = 0; i <= n; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}