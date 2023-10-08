#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    string name;
    float height;
    int age;

    // Constructor
    Person(string n, float h, int a)
    {
        name = n;
        height = h;
        age = a;
    }
};

int main()
{
    // Create two objects of the Person class and initialize them
    Person person1("Naeem", 5.7, 22);
    Person person2("Ashraful", 5.5, 23);

    // Compare the ages and print the name of the person with the greater age
    if (person1.age > person2.age)
    {
        cout << "The person with the greater age is: " << person1.name << endl;
    }
    else if (person2.age > person1.age)
    {
        cout << "The person with the greater age is: " << person2.name << endl;
    }
    else
    {
        cout << "Both persons have the same age." << endl;
    }

    return 0;
}
