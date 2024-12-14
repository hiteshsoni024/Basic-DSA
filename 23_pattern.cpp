#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of rows: ";
    cin >> n;
    for(int i =0;i<n;i++){
        for (int j = 0; j < i; j++)
        {
            cout<< " ";
        }
        for (int j = 0; j < n-i; j++)
        {
           cout<< i+1;
        }
        cout<< endl;
        
    }
    return 0;


}
// Enter the number of rows: 4
// 1111
//  222
//   33
//    4