//swap

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    cout << "a=" << a << endl
         << "b=" << b << endl;
    string temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"after swap:"<<endl;
    cout << "a=" << a << endl
         << "b=" << b << endl;
    return 0;
}