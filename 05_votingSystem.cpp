#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter Your age : ";
    cin>>age;

    if(age<18 && age >0){
        cout<<"You can't vote";
    }else if(age >=18 ){
        cout<<"You can Vote";
    }else{
        cout<<"Please enter valid age!";
    }
    return 0;

}