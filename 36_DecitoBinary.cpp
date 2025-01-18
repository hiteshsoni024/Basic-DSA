//Decimal to binary
#include<iostream>
using namespace std;

//conversion of decimal to binary
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
//conversion odf binary to decimal
int BinTODeci(int binNum){
    int ans=0;
    int power =1; 

    while(binNum>0){
        int rem = binNum % 10;
        binNum = binNum /10;
        ans = ans + (rem * power);
        power= power * 2;
    }
    return ans;

}
int main(){
    int choice ;
    cout<< "what you want to do :"<<endl<<" press 1 : Decimal to binary conversion"<<endl<<"press 2 : Binary to decimal conversion"<<endl;
    cin>>choice;
    if (choice==1){
    int deciNum;
    cout<<"enter the Decimal number: ";
    cin>>deciNum;
    cout<<DecToBin(deciNum);
    }else{
        int BinNum ;
        cout<<"enter a binary number: ";
        cin>>BinNum;
        cout<<BinTODeci(BinNum);
    }
    return 0;

}