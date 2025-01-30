// print all prime numbers from 1 to n
#include <iostream>
using namespace std;
//function to check number is prime or not
bool prime(int num){
    if(num < 1) return false;
        for(int i=2; i*i<=num; i++){
            if(num % i == 0) return false;
            }
            return true;
    }
//main function
int main(){
    int num;
    cout<<"enter the number which up to print prime numbers";
    cin>>num;
    cout<<"the numbers are: ";
    for(int i=2;i<=num;i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}