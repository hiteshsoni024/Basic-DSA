#include <iostream>
using namespace std;

int main() {
<<<<<<< HEAD
    int n; // Height of the diamond
    cout<<"Enter the minimum height of diamond:";
    cin>>n;
    //checking the n if it is even then decrease it by 1 and that will be the height of diamond 
    if (n%2==0){
        n=n-1;
        cout<<"Your Entered number is even that's why we redused the height of diamond by 1"<<endl;
        // Upper half of the diamond
=======
    int n = 5; // Height of the diamond (odd number)

    // Upper half of the diamond
>>>>>>> 657993e227dccfdb7ef1c1d75ab1b2b3c2a5a45a
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

<<<<<<< HEAD
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
=======
    return 0;
}
>>>>>>> 657993e227dccfdb7ef1c1d75ab1b2b3c2a5a45a
