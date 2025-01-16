//sum of n numbers using function
#include<iostream>
using namespace std;
int sum(int n){
    int sum =0;
    for(int i=0;i<=n;i++){
        sum =sum+i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    cout << "the sum of "<<n<<"numbers is :"<<sum(n);
}