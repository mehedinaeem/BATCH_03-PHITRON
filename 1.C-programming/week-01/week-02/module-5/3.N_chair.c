#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    int x = ch;
    if (x >= 65 && x <= 90)
        printf("%c", x + 32);
    else if(x>=97 && x<=122)
        printf("%c", x - 32);

    return 0;
}