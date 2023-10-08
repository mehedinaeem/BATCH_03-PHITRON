#include<bits/stdc++.h>
using namespace std;

void merge(int ar[], int l, int h, int mid)
{
    int left_size = (mid - l + 1);
    int right_size = (h - mid);

    int* left_array = new int[left_size + 1];
    int* right_array = new int[right_size + 1];

    int k = 0;
    for (int i = l; i <= mid; i++)
    {
        left_array[k] = ar[i];
        k++;
    }

    k = 0;
    for (int i = mid + 1; i <= h; i++)
    {
        right_array[k] = ar[i];
        k++;
    }

    left_array[left_size] = INT_MAX;
    right_array[right_size] = INT_MAX;

    int lp = 0, rp = 0;
    for (int i = l; i <= h; i++)
    {
        if (left_array[lp] <= right_array[rp])
        {
            ar[i] = left_array[lp];
            lp++;
        }
        else
        {
            ar[i] = right_array[rp];
            rp++;
        }
    }

    delete[] left_array;
    delete[] right_array;
}

void merge_sort(int ar[], int n, int l, int h)
{
    if (l == h)
        return;

    int mid = (l + h) / 2;
    merge_sort(ar, n, l, mid);
    merge_sort(ar, n, mid + 1, h);
    merge(ar, l, h, mid);
}

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    merge_sort(ar, n, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}
