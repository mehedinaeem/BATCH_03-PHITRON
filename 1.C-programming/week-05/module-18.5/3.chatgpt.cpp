#include <iostream>
using namespace std;

void printNumbers(int n, bool isFirst) {
    if (n == 0) {
        return; // base case
    } else {
        if (!isFirst) {
            cout << " "; // print space before number (except for first number)
        }
        cout << n; // print current number
        printNumbers(n-1, false); // call function recursively with n-1 and not the first number
    }
}

int main() {
    int n;
    cin >> n;
    printNumbers(n, true); // start with first number
    return 0;
}
