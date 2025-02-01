#include<iostream>
#include<vector>
//instead of this header file we can also include <bits/c++.h>

using namespace std;
//vector is a dynamic array with the ability to resize itself automatically
//It is the part Standard Template Library (STL) and provide various useful functions for data manipulation.
int main(){
    //vector syntax
    //vector<int>vec; //by defaut size =0
    //delearation of array -> vector<int>vec={1,2,3} 
    //another syntax vector<int>vec(3,0) -> it means the size of array is 3 and at all places 0 is decle ared
    //in terminal -> g++ ~std=c++11 <file name> && ./a.out -> this is not working in my terminal

    vector<int> vec1 = {1,2,3,4,5};
    cout<<"size of vector vec1 : "<<vec1.size()<<endl;
    for(int i : vec1){//this is called for each loop //at here is a twist, here we call i = value of array not index
        cout<< i << " ";
    }
    cout<<endl;
    vector<char> vec2 = {'A','B','C','D'};
    cout<<"size of vector vec2 : "<<vec2.size()<<endl;
    for(char val : vec2){
        cout<<val<<" ";
    }
    cout<<endl;
    vector<int> vec3;//initially there is n element init
    cout<<"size of vector vec3 : "<<vec3.size()<<endl;
    vec3.push_back(25);
    vec3.push_back(21);
    vec3.push_back(33);
    vec3.push_back(11);
    vec3.push_back(54);//this function push back element in vector 
    vec3.pop_back();//this element pop ut last entry on vector
    cout<<vec3.front();//this shows the first value of vector
    cout<<endl;
    cout<<vec3.at(3);//this will shows the element in which index is given into function parameter
    cout<<endl;
    cout<<"After push back element size of vector vec3 : "<<vec3.size()<<endl;
    for(int j : vec3){
        cout<<j<<" ";
    }
    cout<<endl;
    cout<<vec3.capacity();//if we are pushing elements in vec3 continously to hoga ye ki vector chota pad jayega , to ek ek dusra array banega which capacity is double to previous one 
    return 0;
}