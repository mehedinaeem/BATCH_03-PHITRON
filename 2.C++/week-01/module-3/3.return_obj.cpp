#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int roll;
        char sec;
        int cls;

        Student(string n,int c,int r,char s)
        {
            name=n;
            cls=c;
            roll=r;
            sec=s;
        }
};
Student fun()
{
    string name="MH NAEEM";
    Student naeem(name,13,24,'A');
    return naeem;
}

int main()
{

    Student naeem=fun();
    //Student naeem("MH NAEEM",13,24,'A');
    // string nam="Naeem hasan";
    // naeem.name=nam;
    // naeem.roll=10;
    // naeem.sec='A';
    // naeem.cls=13;

    cout<<naeem.name<<endl;
    cout<<naeem.roll<<endl;
    cout<<naeem.sec<<endl;
    cout<<naeem.cls<<endl;
    return 0;
}