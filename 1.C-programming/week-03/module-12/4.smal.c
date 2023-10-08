#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    scanf("%s", s);
    int count = 0, flag = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            count++;
        else
            flag++;
    }
    printf("%d %d", flag, count);
    return 0;
}