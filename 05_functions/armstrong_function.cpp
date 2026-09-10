#include<iostream>
using namespace std;

int armstrong_number(int num){
    int d,sum=0;
  int temp = num;
 while(num>0){
    d =num % 10;
    sum = sum + d*d*d;
    num = num / 10;
 }    
   cout<< (temp == sum  ? "armstrong number " : "Not arm strong " ); }

   int main(){
    int num;
    cout <<"Enter Number : ";
    cin >>num;

    armstrong_number(num);
    return 0;
   }