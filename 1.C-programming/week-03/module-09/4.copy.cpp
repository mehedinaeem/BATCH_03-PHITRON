#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout<<"Enter 1st array: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<"Enter 2nd Array: ";
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int ans[m + n];

    for (int i = 0; i < n; i++)
    {
        ans[i] = a[i];
        // cout<<ans[i]<<" ";
    }
    // cout<<endl;
    //  for(int i=0;i<n;i++)
    //  {
    //      cout<<ans[i]<<" ";
    //  }
    int i = n;
    for (int j = 0; j < m; j++)
    {
        ans[i] = b[j];
        i++;
        // cout<<ans[i]<<" ";
    }

    cout<<"Final array after copy: ";
    for (i = 0; i < m + n; i++)
    {
        cout << ans[i] << " ";
    }

    // for(int k=0;k<m+n;k++)
    // {
    //     cout<<ans[k]<<" ";
    // }
    return 0;
}