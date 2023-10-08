#include<bits/stdc++.h>
using namespace std;

vector<int>v;

void merge(int l,int h,int mid)
{
    int left_size=mid-l+1;
    int L[left_size+1];

    int right_size=h-mid;
    int r[right_size+1];

    for(int i=l,j=0;i<=mid;i++,j++)
    {
        L[j]=v[i];
    }

    for(int i=mid,j=0;i<=h;i++,j++)
    {
        r[j]=v[i];
    }

    L[left_size]=INT_MAX;
    r[right_size]=INT_MAX;

    int lp=0,rp=0;
    for(int i=l;i<=h;i++)
    {
        if(L[lp]<=r[rp])
        {
            v[i]=L[lp];
            lp++;
        }
        else
        {
            v[i]=r[rp];
            rp++;
        }
    }
}



void merge_sort(int l,int h)
{
    if(l==h)
        return;
    
    int mid=(l+h)/2;
    merge_sort(l,mid);
    merge_sort(mid+1,h);
    merge(l,h,mid);
}



int main()
{
    int n;
    cin>>n;
    //v.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    merge_sort(0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}