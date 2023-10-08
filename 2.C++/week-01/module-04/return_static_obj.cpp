#include <iostream>

using namespace std;
class MyClass
{
public:
    int value;
    MyClass(int val) : value(val) {}
};

MyClass getStaticObject()
{
    static MyClass staticObj(42);
    return staticObj;
}

int main()
{
    MyClass obj = getStaticObject();

    cout << "Value: " << obj.value << endl;

    return 0;
}
