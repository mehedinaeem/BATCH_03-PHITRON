#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin >> t;
    for (int m = 0; m < t; m++)
    {
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[i] > v[j])
                {
                    count++;
                    break;
                }
            }
        }
        if (count == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}