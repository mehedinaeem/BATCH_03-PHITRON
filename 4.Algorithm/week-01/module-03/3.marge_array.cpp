// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a1[]={10,20,30};
//     int a2[]={40,50,60,70,80};
//     int a[10];
//     int k=0,i=0,j=0;
    
//     a1[3]=INT_MAX;
//     a2[5]=INT_MAX;

//     while(i<=3 && j<=5)
//     {
        
//         if(a1[i]<=a2[j])
//         {
//             a[k]=a1[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             a[k]=a2[j];
//             j++;
//             k++;
//         }
//     }

//     for(int l=0;l<10;l++)
//     {
//         cout<<a[l]<<" ";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1[] = {10, 20, 30};
    int a2[] = {40, 50, 60, 70, 80};
    int a[10];
    int k = 0, i = 0, j = 0;

    while (i < 3 && j < 5)
    {
        if (a1[i] <= a2[j])
        {
            a[k] = a1[i];
            i++;
        }
        else
        {
            a[k] = a2[j];
            j++;
        }
        k++;
    }

    while (i < 3)
    {
        a[k] = a1[i];
        i++;
        k++;
    }

    while (j < 5)
    {
        a[k] = a2[j];
        j++;
        k++;
    }

    for (int l = 0; l < k; l++)
    {
        cout << a[l] << " ";
    }

    return 0;
}
