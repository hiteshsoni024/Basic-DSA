#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        // for spaces
        for (int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        //first loop
        for (int j = 1; j <= i+1; j++){
            cout << j ;
        }
        //second loop
        for ( int j =i ; j>0;j--){
            cout << j ;
        }
    cout<< endl;
    }
    return 0;

}
// Enter the no. of rows: 4
//    1
//   121
//  12321
// 1234321