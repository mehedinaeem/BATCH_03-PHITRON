// codeforces round 806 (div-4)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> s;
        int count = 2;
        int flag;
        for (int j = 0; j < n - 1; j++)
        {
            int flag = 0;
            for (int k = 0; k <= j; k++)
            {
                if (j <= n - 2)
                {
                    if (s[j + 1] == s[k])
                    {
                        flag++;
                        break;
                    }
                }
            }

            if (flag > 0)
                count++;
            else
                count += 2;

            // cout<<s[j+1]<<"--"<<count<<endl;
        }

        cout << count << endl;
    }
    return 0;
}