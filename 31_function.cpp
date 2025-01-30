//to calculate the sum of n digit number
#include <iostream>
using namespace std;
int digitSum(int n){
    int sum =  0;
    while(n > 0){
    int lastDigit = n%10;
    n =n/10;
    sum = sum+lastDigit;
    }
   return sum;
}

int main(){
    int n;
    cout<<"enter a number: ";
    cin >> n;
    cout << "the sum of digits of number "<<n<< " is : "<<digitSum(n);
    return 0;
}