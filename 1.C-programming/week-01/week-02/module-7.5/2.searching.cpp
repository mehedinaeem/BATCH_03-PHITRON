#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cin >> x;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == x)
            {
                cout << i;
                break;
            }
        else
            count++;
    }
    if (count == n)
        cout << "-1";

    return 0;
}
