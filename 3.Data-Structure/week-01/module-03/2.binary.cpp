#include<bits/stdc++.h>
using namespace std;

void binary_search()
{
    int n,q,a;
    cin>>n>>q;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);

    //  for(int i=0;i<n;i++)
    // {
    //     cout<<ar[i]<<" ";
    // }
    // cout<<endl;
    
    for(int i=0;i<q;i++)
    {
        cin>>a;
        int l=0,r=n-1;
        bool flag=false;
        while(l<=r)
        {
            int mid=(l+r)/2;
            flag=false;

            if(ar[mid]==a)
            {
                flag=true;
                break;
            }
            if(a>ar[mid])
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if(flag==true)
        {
            cout<<"found"<<endl;
        }
        else
        {
            cout<<"not found"<<endl;
        }
    }

}

int main()
{
    binary_search();
    return 0;
}