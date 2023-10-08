#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int roll;
        char sec;
        int cls;
};

int main()
{
    Student naeem;
    string nam="Naeem hasan";
    naeem.name=nam;
    naeem.roll=10;
    naeem.sec='A';
    naeem.cls=13;

    cout<<naeem.name<<endl;
    cout<<naeem.roll<<endl;
    cout<<naeem.sec<<endl;
    cout<<naeem.cls<<endl;
    return 0;
}