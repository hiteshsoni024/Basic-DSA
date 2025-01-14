#include <iostream>
using namespace std;

int main() {
    int n; // Height of the diamond
    cout<<"Enter the minimum height of diamond:";
    cin>>n;
    //checking the n if it is even then decrease it by 1 and that will be the height of diamond 
    if (n%2==0){
        n=n-1;
        cout<<"Your Entered number is even that's why we redused the height of diamond by 1"<<endl;
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

    }else{
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
    }

    

    return 0;
}
//hollow diamond
//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *