//find the nCr and nPr for n and r
#include<iostream>
using namespace std;
//function for factorial calculation
int factorial(int x){
   int fact = 1;
    if (x == 0 || x==1){
    return 1;
    }else{
    for (int i =1 ; i<=x ; i++){
        fact*=i;
    }
    }
   return fact;
}


//function for nPr
int nPr(int n,int r){
   if (r > n) return 0; // Invalid case
   int ans = factorial(n)/factorial(n-r);
   return ans;
}



//function for nCr
int nCr(int n, int r){
   if (r > n) return 0; // Invalid case
   int ans = factorial (n)/(factorial(r)*factorial(n-r));
   return ans;
}

 
 int main(){
   int choice;
   cin>>choice;
   cout<<"What you want to know :1 for nPr or 2 for nCr"<<choice<<endl;
   if (choice == 1)   {
      /* nPr */
       int n;
       int r;
       cout<<"Enter the value of n";
       cin>>n;
       cout<<"enter the value of r";
       cin>>r;
       if (n >= 0 && r >= 0) {
            cout << "Result (nPr) is: " << nPr(n, r) << endl;
        } else {
            cout << "Invalid input! n and r must be non-negative integers." << endl;
        }
       cout<<"Result is :"<<nPr(n,r);

   }
   else if(choice == 2)   {
      /* nCr */
       int n;
       int r;
       cout<<"Enter the value of n";
       cin>>n;
       cout<<"Enter the value of r";
       cin>>r;
       if (n >= 0 && r >= 0) {
            cout << "Result (nCr) is: " << nPr(n, r) << endl;
        } else {
            cout << "Invalid input! n and r must be non-negative integers." << endl;
        }
       cout<<"Result is :"<<nCr(n,r);
   }
   return 0;    
 }
