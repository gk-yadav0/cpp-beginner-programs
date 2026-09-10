#include<iostream>
using namespace std;
int fibonacci(int num1){
   int f=0 , n;
   int s=1; 
   while(s<=num1){
    // cout<<s<<" "; 
    n=f+s;
       f=s;
       s=n; 
       cout<<f<<" ";
     }    
}

int main(){
    int num1;
   cout<<"enter Fibonacci number : ";
   cin>>num1;
    cout<<fibonacci(num1);
 return 0;}
