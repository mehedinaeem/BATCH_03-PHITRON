#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<long int, int> m;
    long int k;
    int l;
    cin >> l;
    for (int i = 0; i < l; i++)
    {
        cin >> k;
        m[k]++;
    }
    int s = 0;
    for (auto u : m)
    {
        if (u.second >= u.first)
        {
            s += u.second - u.first;
        }
        else
        {
            s += u.second;
        }
    }
    cout << s << endl;
}
