#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    int count=0,flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                if(a[i][j]==1)
                count++;
            }
            if(i!=j)
            {
                if(a[i][j]==0)
                flag++;
            }
        }

    }
    if(flag==((n*n)-3) && count==n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}