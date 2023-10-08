#include<stdio.h>
 int count_before_zero(int a[],int x)
 {
    int count=0;
    for(int i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<x;i++)
    {
        if(a[i]!=0)
            count++;
        else
            break;
    }
    return count;
 }

int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];
    int x=count_before_zero(ara,n);
    printf("%d",x);
    return 0;
}
