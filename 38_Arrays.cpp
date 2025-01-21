//starts of data structure and algorithm
//data structure are used to store data
//data structure - linear, hirachial 
//algorithm- data ke upar alg alg operations perform krne ke tareeke hote h
//arrays are linear data structure 
#include <iostream>
using namespace std;
int main(){
    int marks[] = {2,3,5,8,4,7,3};
    //formula for size of array
    int size = sizeof(marks)/sizeof(int);
    cout<<"the formula for size of array: "<<size<<endl;
    //loop for printing marks
    for (int i = 0; i<=size; i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;
    int attendance[7];
    //for taking input for attandence array 
    for (int  i = 0; i <=7; i++)    {
        cout<<"enter your attendance: ";
        cin>>attendance[i];
    }
    //printing the input of attendance array
     for (int i = 0; i<=size; i++){
        cout<<attendance[i]<<" ";
    }
    
    return 0;
}