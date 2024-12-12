#include<iostream>
using namespace std;
int main(){
    int n, count = 0, i=1;
    cout<<"enter a number: " ;
    cin>>n;
    
  //By While loop
    // while (i<=n){
    // if(n%i==0){
    //     count++;
    //  }
    // i++;
    // }
    //by for loop
    for(i=1;i<=n;i++){
        if(n%i==0){
        count++;
     }
    }
    //or we can start loop form 2 to (n-1) and check whether  n is divisible from 2 to (n-1) if it is, then the number is not prime.because any number is surely devisible by 1 and n. -> method 1

//int n;
// bool IsPrime = true;
//for (int i=2; i<=n-1;i++){
// if (n%i==0){
//  IsPrime =false;
//  break;
//}
//}

//batter way-> find factors (run the loop form 2 to sqrt(n))

/*
for (i=2; i*i<=n;i++){
// if (n%i==0){
//  IsPrime =false;
//  break;
}

*/



    //checking count 
    if(count ==2){
        cout<<"the number "<<n<<" is prime.";
    }else{
        cout<<"the number "<<n<<" is not prime.";
    }
    return 0; 
}
