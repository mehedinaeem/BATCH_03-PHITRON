#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];
    int x;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    
    for (int i = 0; i < x; i++)
    {
        int a, b;
        cin >> a >> b;
        //cin.ignore();

        int sum = 0;
        for (int j = a-1; j <  b; j++)
        {
            sum += ar[j];
            //cout<<ar[j]<<" ";
        }
        cout<< sum << endl;
    }

    return 0;
}
