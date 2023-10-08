#include<stdio.h>
#include<string.h>
int main()
{

    int n;
    char a, b;

    scanf("%d",&n);
    char s[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%s",s);
        if (strlen(s) >= 12)
        {
            for (int i = 0; i < strlen(s); i++)
            {
                a = s[0];
                b = s[strlen(s) - 1];
            }
            printf("%c%d%c\n",a,strlen(s)-2,b);
        }
        else
            printf("%s\n",s);
    }

    return 0;
}
