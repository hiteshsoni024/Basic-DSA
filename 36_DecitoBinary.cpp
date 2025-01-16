//Decimal to binary
#include<iostream>
using namespace std;
int DecToBin(int deciNum){
    int ans=0;
    int power =1; //10^0 -> 10^1 -> 10^2

    while(deciNum>0){
        int rem = deciNum % 2;
        deciNum = deciNum /2;
        ans = ans + (rem * power);
        power= power * 10;
    }
    return ans;
}
int main(){
    int deciNum;
    cout<<"enter the Decimal number: ";
    cin>>deciNum;

    cout<<DecToBin(deciNum);
    return 0;

}