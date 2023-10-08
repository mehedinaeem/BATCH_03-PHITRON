#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
    int marks;
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
        cin >> a[i].cls >> a[i].s>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
        cin.ignore();
        // getchar();
        a[i].marks=a[i].eng_marks+a[i].math_marks;
    }


    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n;j++)
        {
            if((a[i].marks<a[j].marks) || (a[i].marks==a[j].marks))
            {
                if(a[i].marks==a[j].marks)
                {
                    if(a[i].id>a[j].id)
                    swap(a[i],a[j]);
                }
                else if(a[i].marks<a[j].marks)
                swap(a[i],a[j]);
            }
        }
    }
         
    //cout<<endl;
    for (int i = 0; i <n; i++)
    {
        cout << a[i].name << " " << a[i].cls <<" "<<
         a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;

        //cout<<a[i].name<<" "<<a[i].marks<<endl;
    }
    return 0;
}