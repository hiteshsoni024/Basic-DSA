#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    if(marks>100){
        cout<<"Enter your marks out of 100";
    }else if(marks==100){
        cout<<"you got 100/100 Grade: A+";
    } else if(marks>=90 && marks <=99){
        cout<<"Grade: A";
    }else if(marks>=75 && marks<90){
        cout<<"Grade: B";
    }else if(marks>=45 && marks<75){
        cout<<"Grade: C";
    }else if(marks<0){
        cout<<"Enter valid marks";
    }else{
        cout<<"You are Failed";
    }
    return 0;
}
