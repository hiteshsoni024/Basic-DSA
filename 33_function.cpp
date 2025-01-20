//check nummber n is prime or not
#include <iostream>
using namespace std;
bool prime(int n){
    if(n <= 1) return false;
    for (int i =2 ; i*i <= n ; i++){
        if(n % i ==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    cout<<"enter a number:";
    if(prime(n)){
        cout<<"number is prime.";
    }else cout<< "number is not prime";
    return 0;
}