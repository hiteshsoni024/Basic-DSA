#include <iostream>
using namespace std;
int main(){
//code of to find the sum of n numbers which is divisible by 3
int num , sum =0;
cout<<"Enter the number : ";
cin>>num;
//loop to find the sum of n numbers which is divisible by 3
for (int i =1 ; i <= num;i++){
    if (num%3==0){
        sum =sum + i;
    }
}
cout<<"the sum of n numbers which are divisible by 3: "<<sum ;
return 0;

}