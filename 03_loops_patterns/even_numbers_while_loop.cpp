#include<iostream>
using namespace std;
int main(){
    int b,a;
     cout<<"Enter a Number To strat : ";
     cin>>a;
     cout<<"Enter a Number To end : ";
     cin>>b;

     while(a<=b){
          
         if(a%2==0){cout<<a<<endl;}
         a++;
     }
     return 0;}