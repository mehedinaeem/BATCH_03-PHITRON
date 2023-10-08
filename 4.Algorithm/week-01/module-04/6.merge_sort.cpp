#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
int ar1[N];
int ar2[N];
int new_ar[N];

void merge_sort(int l, int h, int ar[], int n);
void sort_and_merge(int l, int h, int mid, int ar[], int n);
void print_sort_array(int ar[], int n);
void new_array(int ar1[], int n, int ar2[], int m);

void merge_sort(int l, int h, int ar[], int n)
{
    // base case
    if (l == h)
        return;

    int mid = (l + h) / 2;
    merge_sort(l, mid, ar, n);
    merge_sort(mid + 1, h, ar, n);

    sort_and_merge(l, h, mid, ar, n);
}

void sort_and_merge(int l, int h, int mid, int ar[], int n)
{
    int left_size = mid - l + 1;
    int left_array[left_size + 1];

    int right_size = h - mid;
    int right_array[right_size + 1];

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
        if (left_array[lp] < right_array[rp])
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
}

void print_sort_array(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}

void new_array(int ar1[], int n, int ar2[], int m)
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (ar1[i] < ar2[j])
        {
            new_ar[k] = ar1[i];
            i++;
            k++;
        }
        else
        {
            new_ar[k] = ar2[j];
            j++;
            k++;
        }
    }

    while (i < n)
    {
        new_ar[k] = ar1[i];
        i++;
        k++;
    }

    while (j < m)
    {
        new_ar[k] = ar2[j];
        j++;
        k++;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ar1[i];
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> ar2[i];
    }

    merge_sort(0, n - 1, ar1, n);
    merge_sort(0, m - 1, ar2, m);

    // print the sorted arrays
    cout << "First sorted Array: ";
    print_sort_array(ar1, n);

    cout << "Second sorted Array: ";
    print_sort_array(ar2, m);

    // merge the sorted arrays
    new_array(ar1, n, ar2, m);

    // print the merged sorted array
    cout << "New sorted array: ";
    print_sort_array(new_ar, n + m);

    return 0;
}
