#include <iostream>
#include <string>
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
    cin.ignore(); // Ignore the newline character in the buffer
    for (int i = 0; i < 3; i++)
    {
        getline(cin, a[i].name);
        cin.ignore(); // Ignore the newline character in the buffer
        cin >> a[i].roll;
        cin.ignore(); // Ignore the newline character in the buffer
        cin >> a[i].cls;
        cin.ignore(); // Ignore the newline character in the buffer
    }
    for (int i = 0; i < 3; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].cls << endl;
    }
    return 0;
}
