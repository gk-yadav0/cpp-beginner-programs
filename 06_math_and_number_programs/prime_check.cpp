#include<iostream>
using namespace std;
int main(){
int num1;
cout<<"enter num : ";
cin>>num1;

 if (num1<= 1){
    cout<<"not prime Number : ";
 }
for (int i =2;i < num1; i++){
    if(num1 % i == 0){
         cout<<"not prime : "<<num1;
         break;
   } else{
   cout<<"prime Number "; break;} }
  return 0 ; }
