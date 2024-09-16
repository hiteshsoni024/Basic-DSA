#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<"The sum of n numbers is : "<<sum;
//Sum of n odd numbers
// for(int i=1;i<=n;i=i+2){
// sum =sum +i;
// }
// cout<<"the sum of n odd numbers is :"<<sum;
/*another way to print sum of odd numbers
for(int i=0;i<=n;i++){
   if(i%2 !=0){
    sum=sum+i;
   }
}
cout<<sum;

WAY TO PRINT EVEN SUM 
for(int i=0;i<=n;i++){
   if(i%2 =0){
    sum=sum+i;
   }
}
cout<<sum;
*/


    return 0;

}