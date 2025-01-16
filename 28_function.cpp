#include<iostream>
using namespace std;
//function declaration
// void myfunc(){
//     cout<<"Hello this is a function";
// }
int myfunction(){
    cout<<"Hello"<<endl;
    return 5;
}
int sum(int a , int b){
    int s =a+b;
    return s;
}
int min(int a, int b, int c){
    int min=0;
    if(a<b && a<c){
        cout<<"a is minimum";
        min=a;
    }else if (b<a && b<c){
        cout<<"b is minimum";
        min=b;
    }else if (c<a && c<b){
        cout<<"c is minimum";
        min = c;
    }
    
    return min;

}
int main (){
    //function invoke
    // myfunc();
    int val = myfunction();
    cout<<"vale is :"<<val<<endl;
    cout<<"the sum of 3 and 4 is :"<<sum(3,4)<<endl;
    cout<<"minimum of 4 1 6 is :"<<min(4,1,6);
    return 0;
} 
