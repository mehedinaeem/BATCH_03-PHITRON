#include <iostream>

int main() {
    using namespace std;
    
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    // Print the top half of the pattern
    for (int i = 0; i < n - 1; i+=2) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << "  \\";
        
        for (int j = 0; j < 2 * (n - i - 2); j++) {
            cout << " ";
        }
        
        cout << "/" << endl;
    }
    
    // Print the middle line
    for (int i = 0; i < n; i++) {
        cout << " ";
    }
    cout << "X" << endl;
    
    // Print the bottom half of the pattern
    for (int i = n - 2; i >= 0; i-=2) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << "/";
        
        for (int j = 0; j < 2 * (n - i - 2); j++) {
            cout << " ";
        }
        
        cout << "\\" << endl;
    }
    
    return 0;
}
