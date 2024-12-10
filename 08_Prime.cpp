#include<iostream>
using namespace std;
int main(){
    int n, count = 0, i=1;
    cout<<"enter a number: " ;
    cin>>n;
    
  //By While loop
    while (i<=n){
    if(n%i==0){
        count++;
     }
    i++;
    }
    //checking count 
    if(count ==2){
        cout<<"the number "<<n<<" is prime.";
    }else{
        cout<<"the number"<<n<<" is not prime.";
    }
    return 0;
}
