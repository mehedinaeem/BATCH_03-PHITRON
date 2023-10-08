#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, t;
    cin >> t;
    int sum1 = 0, sum2 = 0;
    for (int j = 0; j < t; j++)
    {
        cin >> s;
        sum1 = 0, sum2 = 0;
        for (int i = 0; i < 3; i++)
        {
            int x = s % 10;
            s /= 10;
            sum1 += x;
        }
        for (int i = 0; i < 3; i++)
        {
            int x = s % 10;
            s /= 10;
            sum2 += x;
        }
        if (sum1 == sum2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    // cout<<sum1<<endl<<s<<sum2;
    return 0;
}