#include<iostream>
using namespace std;
int main(){
    double a ;
    double b;
    double c;

    cout<<"Enter the first Number: ";
    cin>>a;
    cout<<"Enter the Second Number: ";
    cin>>b;
    int operation;
    cout<<"Enter the Operation which is you want to do with both numbers: \n Press : \n 1. for Addition\n 2. for Subtraction\n 3. for Multiplication\n 4. for Division\n";
    cin>>operation;

    if(operation==1){
        c=a+b;
        cout<<"Sum is : "<<c<<endl;
    }else if(operation==2){
        c=a-b;
        cout<<"Subtraction is : "<<c<<endl;
    }else if(operation==3){
        c=a*b;
        cout<<"Multiplication is : "<<c<<endl;
    }else if(operation==4){
        c=a/b;
        cout<<"Division is : "<<c<<endl;
    }else{
        cout<<"Enter valid input operation"<<endl;
    }
    cout<<"Thank You Very much";
    return 0;



}