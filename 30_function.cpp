//find the factorial of n number

#include <iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    if (n == 0){
    fact = 1;
    }else{
    for (int i =1 ; i<=n ; i++){
        fact= fact*i;
    }
    }
    return fact;
}

int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    cout<<"the factorial of "<<n<<" is :"<<factorial(n);
    return 0;
}