#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter Your age : ";
    cin>>age;

    if(age<=18 && age >0){
        cout<<"You are Nabalik";
    }else if(age >18 ){
        cout<<"You can Vote";
    }else{
        cout<<"BAKCHODI NAHI LODE..!!";
    }
    return 0;

}