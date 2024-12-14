#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin >> n;
    
    for(int i=0;i<n;i++){
         char ch = 'A'+i;
        for(int j=0;j<=i;j++){
            cout<< char(ch-j)<<" ";
    }
    cout<<endl;
    }
    return 0;
}
// Enter the number of rows: 4
// A 
// B A
// C B A
// D C B A