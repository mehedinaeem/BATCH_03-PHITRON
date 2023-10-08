#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
int ar1[N];
int ar2[N];
int new_ar[N];

void print_sort_array(int ar[], int n);
void input_array(int ar[], int x);
void new_array(int ar1[], int n, int ar2[], int m);

void input_array(int ar[], int x)
{
    for (int i = 0; i < x; i++)
    {
        cin >> ar[i];
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
    input_array(ar1, n);

    int m;
    cin >> m;
    input_array(ar2, m);

    sort(ar1, ar1 + n);
    sort(ar2, ar2 + m);

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
