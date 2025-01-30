//print nth Fabonacci
#include<iostream>
using namespace std;
int fabonacci(int n){
    int Fn, Fn1 = 1, Fn2 = 0;
    if ( n <=1 ) return n;

    for (int i=2; i<=n; i++){
        Fn = Fn1 + Fn2;
        Fn2 = Fn1;
        Fn1 = Fn;

    }
return Fn1;
}
int main(){
    int n;
    cout<<"enter the number of places you want to print fabonacci series: ";
    cin>>n;
    cout<<fabonacci(n);
    return 0;
}