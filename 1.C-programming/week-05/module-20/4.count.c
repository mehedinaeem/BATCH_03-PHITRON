#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    gets(s);
    int count=0,flag=0,space=0;
    //printf("%s",s);
    for(int i=0;i<strlen(s);i++)
    {
       if(s[i]>=65 && s[i]<=90)
       count++;
       if(s[i]>=97 && s[i]<=122)
       flag++;
       if(s[i]==' ')
       space++;
    }
    printf("Capital - %d\n",count);
    printf("Small - %d\n",flag);
    printf("Spaces - %d\n",space);


    return 0;
}