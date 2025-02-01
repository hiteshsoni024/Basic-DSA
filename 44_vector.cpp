//this is the question of leet code
//problem no. 136 Single Number
/*Problem Statement: Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]

Output: 1

Example 2:

Input: nums = [4,1,2,1,2]

Output: 4

Example 3:

Input: nums = [1]

Output: 1
 */


#include<iostream>
#include<vector>
using namespace std;
int single(vector<int>& nums) {
    int ans= 0;
    for(int val : nums){
        ans ^= val;
    }
    return ans;
}
int main(){
//vectors ko jab bhi hm function se pass krte h to wo pass by value hote h unhe pass by refrence banane ke liye we do -> int function(vector<int >& number){}
//it reflects into our main function
//'&' lagane se original vector ka alias create ho jata h (alternate name)
vector<int> vec= {4,1,2,1,2};
    cout<<single(vec);
    return 0;
}