#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                int temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }

    if (n % 2 == 0)
    {
        printf("%d %d", ar[(n / 2) - 1], ar[(n / 2)]);
    }
    else
    {
        printf("%d", ar[(n - 1) / 2]);
    }

    return 0;
}
