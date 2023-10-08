#include <stdio.h>

int main()
{
    char a[1000];
    scanf("%s", a);

    for (int i = 0; a[i] != '\0'; i++)
    {
        //char ch = a[i];

        if (a[i] >= 'a' && a[i] <= 'z')
        {
            int ans = a[i] - 32;
            printf("%c", ans);
        }
        else if (a[i] >= 'A' && a[i] <= 'Z')
        {
            int ans = a[i] + 32;
            printf("%c", ans);
        }
      
    }

    return 0;
}
