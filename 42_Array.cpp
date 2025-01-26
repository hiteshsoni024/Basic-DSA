#include<iostream>
using namespace std;
int reverse(int a1[],int size){
    int a2[size];
    for(int i=0;i<size;i++){
        a2[size-1-i]=a1[i];
    }
    for(int i=0;i<size;i++){
        cout<<a2[i]<<" ";
    }
    return 0;
}
int main(){
    int a1[]={2,3,4,5,6,7,8};
    int size =sizeof(a1)/sizeof(int);
    reverse(a1,size);
    return  0;
}