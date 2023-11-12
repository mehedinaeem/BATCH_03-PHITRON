#include <stdio.h>
int main()
{
    int i, o, d, t;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d %d", &o, &d);
        double f = (o - (o * 0.1));
       // printf("%d   %d\n\n",f,d);
        if (f < d)
        {
            printf("ONLINE\n ");
        }
        else if (f > d)
        {
            printf("DINNING\n");
        }
        else if (f == d)
        {
            printf("EITHER\n");
        }
    }
    return 0;
}