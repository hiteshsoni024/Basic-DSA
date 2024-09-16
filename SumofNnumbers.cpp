#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<"The sum of n numbers is : "<<sum;
    return 0;


}