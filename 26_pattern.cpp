#include <iostream>
using namespace std;

int main() {
    int n = 5; // Height of the diamond (odd number)

    // Upper half of the diamond
    for (int i = 1; i <= n; i += 2) {
        for (int j = 1; j <= n - i; j += 2) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // Lower half of the diamond
    for (int i = n - 2; i >= 1; i -= 2) {
        for (int j = 1; j <= n - i; j += 2) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
