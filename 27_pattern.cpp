#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Height of the butterfly:";
    cin>>n;
    //upper part of butterfly
    for(int i=0 ; i<n ; i++){ // for left star star
        for (int j=0; j<=i; j++){
            cout<<"*";
        }
       
         for (int j = 2; j < 2 * (n - i); j++) {//spaces
            cout << " ";
        }
         for (int j = 0; j <= i; j++) {//for right star
            cout << "*";
        }
       
        cout<<endl;
    }
    // Lower part of the butterfly
    for (int i = n; i >= 1; i--) {
        // Print the left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Print the spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Print the right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
// Enter the Height of the butterfly:4
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *