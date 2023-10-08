#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
int ar1[N];
int ar2[N];
int a[N];

void merge_array(int m,int n)
{
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(ar1[i]>ar2[j])
        {
            a[k]=ar1[i];
            i++;
            k++;
        }
        else
        {
            a[k]=ar2[j];
            j++;
            k++;
        }
    }

    while(i<n)
    {
        a[k]=ar1[i];
        i++;
        k++;
    }
    while(j<m)
    {
        a[i]=ar2[j];
        j++;
        k++;
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar1[i];
    }

    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>ar2[i];
    }

    merge_array(m,n);

    for(int i=0;i<m+n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}