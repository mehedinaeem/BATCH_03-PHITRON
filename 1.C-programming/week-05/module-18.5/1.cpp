#include <bits/stdc++.h>
using namespace std;

void love(int i)
{
    if (i == 0)
        return;
    else
    {
        cout << "I love Recursion" << endl;
        love(i - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    love(n);
    return 0;
}