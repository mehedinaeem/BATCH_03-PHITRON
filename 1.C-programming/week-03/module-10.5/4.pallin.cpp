#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - i - 1])
        {
            count++;
            break;
        }
    }
    if (count == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}