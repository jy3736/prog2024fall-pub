#include <iostream>
using namespace std;

// Function to print left-aligned triangle
void leftTri(int n, char ch) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch;
        }
        cout << endl;
    }
}

// Function to print right-aligned triangle
void rightTri(int n, char ch) {
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n-i-1; j++) {
            cout << " ";
        }   
        for (int j = 0; j <= i; j++) {
            cout << ch;
        }
        cout << endl;
    }
}

// Function to print reversed left-aligned triangle
void revLeftTri(int n, char ch) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << ch;
        }
        cout << endl;
    }
}

// Function to print reversed right-aligned triangle
void revRightTri(int n, char ch) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = 0; j < n-i; j++) {
            cout << ch;
        }
        cout << endl;
    }
}

int main() {
    int n, mode;
    char ch;
    
    // Input number of levels, character, and mode
    cin >> n >> ch >> mode;

    // Print triangle based on selected mode
    switch (mode) {
        case 1:
            leftTri(n, ch);
            break;
        case 2:
            rightTri(n, ch);
            break;
        case 3:
            revLeftTri(n, ch);
            break;
        case 4:
            revRightTri(n, ch);
            break;
    }

    return 0;
}
