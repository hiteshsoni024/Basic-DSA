#include<iostream>
using namespace std;
//linear search
int linearSearch(int a[], int size,int target){
    for(int i =0; i<size; i++){
        if(a[i]==target){
            cout<<"the index is : "<<i<<endl;
            return 1;
        }
    }
    return 0;
}
int main(){
    int a[]={1,4,6,3,9,8,7};
    int size = sizeof(a)/sizeof(int);
    cout<<"the size of array is : "<<size;
    int target;
    cout<<"enter what element want you to search: ";
    cin>>target;
    cout<<"the target element is present in array: "<<linearSearch(a,size,target);
    return 0;
}
