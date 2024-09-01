#include <iostream>
#include <iomanip> // For std::setw and std::left
using namespace std;

int main() {
    int rows, cols;

    cin >> rows >> cols;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << left << setw(4) << i * j;
        }
        cout << endl;
    }

    return 0;
}
