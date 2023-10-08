#include <bits/stdc++.h>
using namespace std;

int take_input()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    // for(int i=0;i<q;i++)
    // {
    //     cin>>a[i];
    // }
    // for(int i=0;i<q;i++)
    // {
    //    int count=0;
    //    for(int j=0;j<n;j++)
    //    {
    //        if(a[i]==ar[j])
    //          count++;
    //    }
    //    if(count>0)
    //       cout<<"found"<<endl;
    //    else
    //       cout<<"not found"<<endl;
    // }
}
binry_search()
{
    int x, q, lb = 0, ub = n - 1;
    sort(ar, ar + 1);
    for (int i = 0; i < q; i++)
    {
        cin >> q;
        while (lb <= ub)
        {
            int mid = (lb + ub) / 2;
            bool flag = false;
            if (x == ar[mid])
            {
                flag = true;
                break;
            }
            if (x > a)
            {
                // dane mid
                lb = mid + 1;
            }
            else
            {
                // bame x
                up = mid - 1;
            }
        }
        if (flag == true)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
}

binary search()

    int main()
{
    take_input();
    binary_search();
    return 0;
}