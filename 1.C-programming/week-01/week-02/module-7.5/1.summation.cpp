#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
    }
    if (sum < 0)
        cout << -sum;
    else
        cout << sum;

    return 0;
}
