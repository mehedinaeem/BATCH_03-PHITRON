#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++)
    {
       cin >> ar[i];
    }
    int operations = 0;

    while (true) {
        bool allEven = true;
        for (int i = 0; i < n; i++) {
            if (ar[i] % 2 != 0) {
                allEven = false;
                break;
            }
        }

        if (!allEven)
            break;

        // If all elements are even, divide them by 2
        for (int i = 0; i < n; i++) {
            ar[i] /= 2;
        }

        operations++;
    }

    cout << operations << endl;
    return 0;
}
