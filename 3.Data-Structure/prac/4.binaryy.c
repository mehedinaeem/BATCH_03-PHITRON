#include <stdio.h>

int binary_search(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[7];
    int i;

    printf("Enter 7 integer values in ascending order:\n");
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the value to search: ");
    scanf("%d", &target);

    
    int position = binary_search(arr, 7, target);

    
    if (position != -1)
    {
        printf("The value %d is found at index %d.\n", target, position);
    }
    else
    {
        printf("The value is not found in the array.\n");
    }

    return 0;
}
