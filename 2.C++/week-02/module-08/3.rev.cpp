#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    string nm;
    int cls;
    char s;
    int math_marks;
    int eng_marks;
};

int main()
{

    int n;
    cin>>n;
    student a[n];
    for(int i=0;i<n;i++)
    {
        getline(cin,a[i].nm);
        cin.ignore();
        cin>>a[i].cls>>a[i].s>>a[i].math_marks>>a[i].eng_marks;
        
    }
    for(int i=n;i>0;i--)
    {
       cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }
    return 0;
}