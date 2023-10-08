#include<bits/stdc++.h>
using namespace std;

int sum(int n, int s)
{
    if(n > 0)
    {
        int x;
        cin >> x;
        s += x;
        sum(n - 1, s);
    }
    else return s;
}

int main()
{
    int n, s = 0;
    cin >> n;
    int r = sum(n, s);
    cout << r;
    return 0;
}
