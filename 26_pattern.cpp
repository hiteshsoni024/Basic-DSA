#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "The number of rows: ";
    cin >> n;
    //top
    for ( int i =0 ; i<n ; i++){
        //space 
        for (int j =0 ; j<n-i-1 ; j++){
            cout << " ";
        } 

        cout<< "*";

        if(i != 0 ){
        //space
            for(int j =0; j<2*i-1;j++){
                cout<< " ";
            }
         cout<< "*";
        }
        cout<<endl;
    }
    //bottom
    for (int i=0; i<n-1; i++){
        //space
        for(int j =0; j<i+1;j++){
            cout << " ";
        } 
        if( i != n-1 ){
        for (int j=0; j<2*(n-i)-5; j++){
            cout << " ";
        }
        cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}