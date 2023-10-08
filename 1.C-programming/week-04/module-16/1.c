#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        //print space
        for(int j=n;j>i;j--)
        {
            printf(" ");
        }
        //print thr upper pyramid
        for(int k=1;k<=2*i-1;k++)
        {
            printf("%d",k);
        }
        
        printf("\n");
    }

     for(int i=n-1;i>0;i--)
    {
        //print space
        for(int j=n;j>i;j--)
        {
            printf(" ");
        }
        //print thr lower pyramid
        for(int k=1;k<=2*i-1;k++)
        {
            printf("%d",k);
        }
        
        printf("\n");
    }
    return 0;
}