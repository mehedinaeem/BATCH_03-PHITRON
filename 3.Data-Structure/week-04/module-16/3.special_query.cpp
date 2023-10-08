#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q1;
    queue<string> q2;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            if (!q2.empty())
            {
                cout << q2.front() << endl;
                q2.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
        else if (x == 0)
        {
            string s;
            cin >> s;
            q1.push(x);
            q2.push(s);
        }
    }

    return 0;
}
