#include <bits/stdc++.h>
using namespace std;

class Person {
public:
    string name;
    float height;
    int age;

    // Constructor
    Person(string s, float h, int a) {
        name = s;
        height = h;
        age = a;
    }
};

int main() {
    // Create a dynamic object of the class using the constructor
    Person* naeem = new Person("MH NAEEM", 5.7, 22);

    // Access and display the person's information
    cout << naeem->name << endl;
    cout << naeem->height << endl;
    cout << naeem->age << endl;

    // Clean up the dynamically allocated object
    delete naeem;

    return 0;
}
