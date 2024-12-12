#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number of rows: ";
    cin >> n;
    char ch = 'A';
    for ( int i =1 ; i<=n ; i++){
        for (int j =1 ; j<=i ; j++){
            cout<< ch<< " ";
        }
        ch = ch + 1;
        cout<<endl;
    }
    return 0;
}
// Enter the number of rows: 3
// A 
// B B 
// C C C 