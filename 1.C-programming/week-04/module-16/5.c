#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
    int x = strlen(s);
    for (int i = 0; i < x / 2; i++)
    {
        if (s[i] != s[x - i - 1])
            return 0;
    }
    return 1;
}

int main()
{
    char ch[10];
    scanf("%s", ch);
    if (is_palindrome(ch) == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
