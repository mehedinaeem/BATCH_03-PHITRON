#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->marks = marks;
        this->roll = roll;
    }

    // Custom comparator to compare students based on their marks and roll numbers
    bool operator<(const Student &other) const
    {
        if (marks != other.marks)
            return marks < other.marks;
        return roll > other.roll;
    }
};

int main()
{
    int N;
    cin >> N;

    priority_queue<Student> students; // Priority queue to store students

    // Reading student data and inserting into the priority queue
    for (int i = 0; i < N; ++i)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        students.push(Student(name, roll, marks));
    }

    int Q;
    cin >> Q;

    while (Q--)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            students.push(Student(name, roll, marks));

            // Printing the current student with the maximum marks
            cout << students.top().name << " " << students.top().roll << " " << students.top().marks << endl;
        }
        else if (command == 1)
        {
            // Printing the current student with the maximum marks
            if (!students.empty())
                cout << students.top().name << " " << students.top().roll << " " << students.top().marks << endl;
            else
                cout << "Empty" << endl;
        }
        else if (command == 2)
        {
            // Deleting the student with the maximum marks
            if (!students.empty())
                students.pop();

            // Printing the current student with the maximum marks
            if (!students.empty())
                cout << students.top().name << " " << students.top().roll << " " << students.top().marks << endl;
            else
                cout << "Empty" << endl;
        }
    }

    return 0;
}
