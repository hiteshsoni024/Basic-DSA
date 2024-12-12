#include<iostream>
using namespace std;
int main(){
    int Num;
    cout<<"Enter the Number: ";
    cin>>Num;
    char Ch= 'A';
    for (int i=1;i<=Num;i++){
        
        for (int j=1;j<=Num; j++){
            cout<<Ch << " ";
            Ch= Ch+1;
        }
         
        cout<<endl;
    }
    return 0;

}
// Enter the Number: 3
// A B C 
// D E F
// G H I