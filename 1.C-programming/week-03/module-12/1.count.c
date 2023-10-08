#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int count = 0;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] % 2 == 0)
            count++;
        else
            flag++;
    }
    printf("%d %d\n",count,flag);
    return 0;
}