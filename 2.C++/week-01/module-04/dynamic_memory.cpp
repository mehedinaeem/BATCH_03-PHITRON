#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    
    int *dynamicArray = new int[size];

    cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> dynamicArray[i];
    }

    cout << "The array elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout << dynamicArray[i] << " ";
    }

    
    delete[] dynamicArray;

    return 0;
}
