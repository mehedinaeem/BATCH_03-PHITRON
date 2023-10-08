// #include<bits/stdc++.h>
// using namespace std;

// void fun(int i)
// {
//     if(i==6)  return;
//     //cout<<i<<endl;
//     fun(i+1);
//     cout<<i<<endl;//reverse
// }

// int main()
// {
//     fun(1);
//     return 0;
// }

//without paremeter

#include <iostream>
using namespace std;

void fun()
{
    static int i = 1;
    if(i == 6) return;
    fun();  // Recursive call before printing
    cout << i << endl;
    i++;
}

int main()
{
    fun();
    return 0;
}
