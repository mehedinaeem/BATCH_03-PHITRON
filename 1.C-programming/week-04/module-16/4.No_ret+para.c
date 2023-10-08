#include<stdio.h>

void array(int a[],int x)
{
    for(int i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
        printf("%d ",a[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    array(ar,n);
    
    return 0;
}