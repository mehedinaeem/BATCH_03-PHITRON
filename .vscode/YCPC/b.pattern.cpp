#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    for (ll i = 0; i <= (10 + n) / 2; i++)
    {
        for (ll j = (10 + n) / 2; j >= i; j--)
        {
            cout << " ";
        }
        for (ll j = 1; j <= (2 * i) + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (ll j = 0; j < 5; j++)
    {
        for (ll i = 0; i <= 5; i++)
        {
            cout << " ";
        }
        for (ll i = 0; i < n; i++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}