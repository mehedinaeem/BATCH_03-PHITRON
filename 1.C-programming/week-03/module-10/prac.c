// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[1000000];

//     scanf("%s", &s);
//     int count[26] = {0};
//     for (int i = 0; i < strlen(s); i++)
//     {
//         //sort(s.begin(),s.end()+1);
//         int val = s[i] - 'a';
//         count[val]++;
//     }
//     for (int i = 0; i < strlen(s); i++)
//     {
//         //int val = s[i] - 'a';
//         if (count[val] != 0)
//         {
//             printf("%c : %d\n", val + 'a', count[val]);
//         }
//         count[val] = 0;
//     }
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char s[10000000];
    scanf("%s", s);

    int count[26] = {0};
    int length=strlen(s);

    
    for (int i = 0; i < length; i++)
    {
        int val = s[i] - 'a';
        count[val]++;
    }

    
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("%c : %d\n", i + 'a', count[i]);
        }
    }

    return 0;
}


// its not give tle
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char s[10000000];
//     scanf("%s", s);

//     int count[26] = {0};
//     int length = strlen(s);

//     // Count the occurrence of each character
//     for (int i = 0; i < length; i++)
//     {
//         int val = s[i] - 'a';
//         count[val]++;
//     }

//     // Print the count of each character in lexicographic order
//     for (int i = 0; i < 26; i++)
//     {
//         if (count[i] != 0)
//         {
//             printf("%c : %d\n", i + 'a', count[i]);
//         }
//     }

//     return 0;
// }

