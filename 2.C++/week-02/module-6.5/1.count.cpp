#include <bits/stdc++.h>
using namespace std;

void count(string s)
{
    int m = 0, flag = 0, count = 0;
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == ' ' || s[i] == '?')
        {
            int a = i;
            flag = 0;

            for (int j = count; j < a; j++)
            {

                if ((s[j] >= 65 && s[j] <= 90) || (s[j] >= 97 && s[j] <= 122))
                    flag++;
            }
            count = a;
            if (flag > 0)
                m++;
        }
    }
    cout << m+1 << endl;
}

int main()
{
    string s;
    getline(cin, s);
    count(s);
    return 0;
}