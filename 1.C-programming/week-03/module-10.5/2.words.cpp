#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char a, b;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s.length() > 10)
        {
            for (int i = 0; i < s.length(); i++)
            {
                a = s[0];
                b = s[s.length() - 1];
            }
            cout << a << s.length() - 2 << b << endl;
        }
        else
            cout << s << endl;
    }

    return 0;
}