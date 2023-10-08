#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter num 1:");
    scanf("%d", &a);

    printf("Enter num 1:");
    scanf("%d", &b);

    if (a >= b)
        printf("Yes");
    else
        printf("No");

    return 0;
 }