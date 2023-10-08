#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c, x;
    int count=0;
    cin >> r >> c;
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    cin >> x;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (x == a[i][j])
               count++;
        }
    }
    if(count==0)
     cout << "will take number" << endl;
     else
     cout << "will not take number" << endl;
    return 0;
}