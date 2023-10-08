#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        //print space
        for(int j=n-i;j>0;j--)
        {
            printf(" ");
        }

        //print number
        for(int k=1;k<=i;k++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}