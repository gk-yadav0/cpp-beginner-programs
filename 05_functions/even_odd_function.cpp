#include<iostream>
using namespace std;
    
int even_odd(int num){

    if(num%2==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
 }

 int main(){
    int num;
    cout<<"enter Num : ";
    cin>>num;
    cout<<even_odd(num);
 
return 0; }