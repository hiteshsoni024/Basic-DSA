#include<iostream>
using namespace std;
int main(){
//arithmetic operator
int a;
int b;
int add,sub,multiple,division,remender;
cout<<"enter (integer) a:";
cin>>a;
cout<<"enter (integer) b:";
cin>>b;
//add
add=a+b;
cout<<"add is:"<<add<<endl;
//substract
sub=a-b;
cout<<"sub is :"<<sub<<endl;
//multiplication
multiple=a*b;
cout<<"multiply is:"<<multiple<<endl;
       
//devision
division=a/b;
cout<<"division is:"<<division<<endl;
        
//remainder
remender=a%b;
cout<<"remender is:"<<remender<<endl;
//relational operator
cout<<(3>5)<<endl;//false -> 0
cout<<(3<5)<<endl;//true -> 1
cout<<(4<=5)<<endl;
cout<<("Hitesh"=="HITESH");
cout<<("Hitesh"=="Hitesh"); 
//logical operator

    return 0;
} 
