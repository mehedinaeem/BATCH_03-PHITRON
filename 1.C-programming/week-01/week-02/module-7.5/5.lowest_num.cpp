#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin >> n;
    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int min=INT_MAX;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(ar[i]<min)
        {
            min=ar[i];
            x=i+1;
        }
    }
    cout<<min<<" "<<x;

    return 0;
}
