#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int roll;
    int cls;
};
int main()
{
    student a[3];
    for (int i = 0; i < 3; i++)
    {
        //cin.ignore();
        getline(cin,a[i].name);
        //cin.ignore();
        cin >> a[i].roll >> a[i].cls;
        cin.ignore();
        // getchar();
    }
    for (int i = 0; i < 3; i++)
    {
        cout << a[i].name << " " << a[i].roll
         << " " << a[i].cls << endl;
    }
    return 0;
}