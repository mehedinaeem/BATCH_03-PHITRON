#include<bits/stdc++.h>
using namespace std;

const int n=1e5+7;
int ar[n];

void merge(int l,int h,int mid)
{
    int left_size=mid-l+1;
    int left_array[left_size+1];

    int right_size=h-mid;
    int right_array[right_size+1];

    int k=0;
    for(int i=l;i<=mid;i++)
    {
        left_array[k]=ar[i];
        k++;
    }

    k=0;
    for(int i=mid+1;i<=h;i++)
    {
        right_array[k]=ar[i];
        k++;
    }

    left_array[left_size]=INT_MIN;
    right_array[right_size]=INT_MIN;

    int lp=0,rp=0;
    for(int i=l;i<=h;i++)
    {
        if(left_array[lp]>right_array[rp])
        {
            ar[i]=left_array[lp];
            lp++;
        }
        else
        {
            ar[i]=right_array[rp];
            rp++;
        }
    }
}

void merge_sort(int l,int h)
{
    //base case
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
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    merge_sort(0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}