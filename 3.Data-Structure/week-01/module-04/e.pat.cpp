// Print the top half of the pattern
for (int i = 1; i < n - 2; i++) {
    for (int j = 0; j < i; j++) {
        cout << " ";
    }
    cout << "\\";
    
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
for (int i = n - 3; i >= 1; i--) {
    for (int j = 0; j < i; j++) {
        cout << " ";
    }
    cout << "/";
    
    for (int j = 0; j < 2 * (n - i - 2); j++) {
        cout << " ";
    }
    
    cout << "\\" << endl;
}
