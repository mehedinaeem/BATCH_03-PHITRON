#include<bits/stdc++.h>
using namespace std;

const int N=1e5+7;
int ar[N];

void merge(int l,int h,int mid)
{
    int left_size(mid-l+1);
    int left_array[left_size+1];

    int right_size(h-mid);
    int right_array[right_size+1];

    
    for(int i=l,j=0;i<=mid;i++,j++)
    {
        left_array[j]=ar[i];
    }
    
    for(int i=mid+1,j=0;i<=h;i++,j++)
    {
        right_array[j]=ar[i];
    }

    left_array[left_size]=INT_MAX;
    right_array[right_size]=INT_MAX;


    int lp=0,rp=0;
    for(int i=l;i<=h;i++)
    {
        if(left_array[lp]<=right_array[rp])
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
    //int arr[n];
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