#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the Number of rows: ";
    cin>>n;
    cout<<"Enter the Number of column: ";
    cin>>m;
    for (int i =1 ; i<= n ; i++){
        for(int j =1 ; j<=m ; j++){
            cout<<j;
        }
        cout<< endl;

    }
    return 0;
    
}
/*
Enter the Number of rows: 3
Enter the Number of column: 4
1234
1234
1234
*/
//if we change cout<<j to cout << i
//we get
// Enter the Number of rows: 3
// Enter the Number of column: 3
// 111
// 222
// 333
//inner loop -> 1 single row 
//outer loop -> for column
