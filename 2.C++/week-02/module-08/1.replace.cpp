#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int j = 0; j < t; j++)
    {
        string s, q;
        cin >> s >> q;
        int count = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == q[0])
            {
                int l = i;
                count = 0;
                for (int k = 0; k < q.length(); k++)
                {
                    if (s[l] == q[k])
                    {
                        count++;
                        l++;
                    }
                    else
                        break;
                }
                if (count == q.length())
                    s.replace(i, q.length(), "$");
            }
        }
        cout << s << endl;
    }

    return 0;
}
