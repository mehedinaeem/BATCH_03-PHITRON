#include<stdio.h>

int add(int x,int y)
{
    int s=x+y;
    return s;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=add(a,b);
    printf("%d",sum);
    return 0;
}