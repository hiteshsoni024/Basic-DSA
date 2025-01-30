#include <iostream>
using namespace std;
void changeArr(int arr[],int size){
    cout<<"in function:\n";
    for (int i=0; i<size ; i++){
        cout<<arr[i]<<" ";
        arr[i]=2*arr[i];
    }
}
int main(){
    int arr[] = {1,2,3};
    changeArr(arr,3);//pass by reference
    cout<<"in main function\n";
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}