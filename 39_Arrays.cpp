#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,4,-2,5,-4};
    int choice,max = arr[0],min=arr[0];
    cout<<"enter 1 for check largest number: \nenter 2 for check smallest number: "<<endl;
    cin>>choice;
    if(choice==1){
        for (int i=1 ; i<5; i++){
            if(max <= arr[i+1]){
            max = arr[i+1];
            }
        }
        cout<<"the maximum number of array is : "<<max;
    }else if(choice == 2){
        for(int i=0 ; i<=4 ; i++){
            if(min>=arr[i+1]){
                min = arr[i+1];
            }
        }
        cout<<"the smallest number is : "<<min;
    }else{
        cout<<"you entered wrong choice!!";
    }
    return 0;
}