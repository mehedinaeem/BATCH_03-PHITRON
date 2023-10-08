#include <stdio.h>
int main()
{
    int n, a, b;
    int count = 0, flag = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        if (a > b)
            count++;
        if (a < b)
            flag++;
    }
    if (count > flag)
        printf("Tiger");
    else if (count < flag)
        printf("Pathan");
    else
        printf("Draw");
    return 0;
}