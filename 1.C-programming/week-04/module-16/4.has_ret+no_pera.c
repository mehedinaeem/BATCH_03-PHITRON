#include<stdio.h>
int multi()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int m=x*y;
    return m;
}
int main()
{
    int gunfol=multi();
    printf("%d",gunfol);
    
    return 0;
}