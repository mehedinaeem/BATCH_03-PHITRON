#include <iostream>
using namespace std;

int main()
{
    long long int n,sum=0;
    cin >> n;
    long int ar[n];
    long long int ar1[n];
    int x;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum+=ar[i];
        ar1[i]=sum;
        //cout<<ar1[i]<<" ";
    }
    //cout<<endl;
    
    for (int i = 0; i < x; i++)
    {
        int a, b;
        cin >> a >> b;
        if(a>1 && b>1)
        cout<<ar1[b-1]-ar1[a-2]<<endl;
        else if(a==1)
        cout<<ar1[b-1]<<endl;
    }

    return 0;
}
