#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum;
    for(int i=0;i<n;i++)
    {
        sum=0;
        int ar[4];
        for(int j=0;j<4;j++)
        {
            scanf("%d",&ar[j]);
        }
        for(int j=1;j<4;j++)
        {
            sum+=ar[j];
        }
        printf("%d\n",ar[0]-sum);
        
    }
    return 0;
}