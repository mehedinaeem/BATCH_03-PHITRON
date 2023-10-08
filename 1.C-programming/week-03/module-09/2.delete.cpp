#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cout << "Enter the pos u want to del: ";
    int pos;
    cin >> pos;
    for (int i = pos; i < n; i++)
    {
        ar[i] = ar[i + 1];
    }
    for (int i = 0; i < n - 1; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}