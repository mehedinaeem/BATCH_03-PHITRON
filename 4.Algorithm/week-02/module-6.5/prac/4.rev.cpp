#include <iostream>
using namespace std;

void printReverse(int n) {
    if (n == 0) {
        return;
    }
    cout << n % 10;
    printReverse(n / 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Reverse: ";
    printReverse(n);

    return 0;
}
