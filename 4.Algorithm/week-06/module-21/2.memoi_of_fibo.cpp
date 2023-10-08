#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 7;
ll save[N];

ll int fib(ll n)
{
    if (n <= 1)
        return 1;

    if (save[n] != -1)
        return save[n];

    save[n] = fib(n - 1) + fib(n - 2);
    return save[n];
}

int main()
{
    ll n;

    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        save[i] = -1;
    }
    fib(n);
    cout << fib(n) << endl;
    return 0;
}