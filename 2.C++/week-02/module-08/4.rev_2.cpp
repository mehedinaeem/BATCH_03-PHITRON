#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int cls;
    char s;
    int id;
};
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    student a[n];
    for (int i = 0; i < n; i++)
    {
        //cin.ignore();
        cin>>a[i].name;
        //cin.ignore();
        cin >> a[i].cls >> a[i].s>>a[i].id;
        cin.ignore();
        // getchar();
    }
    for (int i = 0; i < n/2; i++)
    {
        swap(a[i].id,a[n-i-1].id);
    }
    for(int i=0;i<n;i++)
    {
        cout << a[i].name << " " << a[i].cls <<" "<<
         a[i].s<<" "<<a[i].id<<endl;
    }
    return 0;
}