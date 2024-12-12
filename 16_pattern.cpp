#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number of rows: ";
    cin >> n;
    for ( int i =1 ; i<=n ; i++){
        for (int j =1 ; j<=i ; j++){
            cout<< i<< " ";

        }
        cout<<endl;
    }
    return 0;
}
//Enter the number of rows: 3
// 1 
// 2 2
// 3 3 3