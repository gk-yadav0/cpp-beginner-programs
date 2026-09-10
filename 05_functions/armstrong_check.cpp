#include<iostream>
using namespace std;

int main(){
    int num,d,sum=0;

 cout<<"num : ";
 cin>>num;
  int temp = num;
 while(num>0){
    d =num % 10;
    sum = sum + d*d*d;
    num = num / 10;
 }    
   if(temp == sum){
    cout<<"armstrong Number : ";
   }
   else{
    cout<<"not atrmstrong ";
   }
        return 0 ;


}