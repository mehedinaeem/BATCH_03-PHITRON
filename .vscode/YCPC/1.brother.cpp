#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll ans = (a % 100) * (b % 100);
        cout<<a%100<<"  "<<b%100<<endl;
        cout<<ans<<endl;
        cout << (ans % 100) << endl;
    }
    return 0;
}