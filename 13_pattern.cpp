#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int Num = 1;
    for ( int i =1; i<= n ; i++){
        for (int j=1; j<=n; j++){
            cout << Num << " ";
            Num++;
        }
        cout << endl;

    }
    return 0;
}
// Enter the Number: 3
// 1 2 3 
// 4 5 6 
// 7 8 9