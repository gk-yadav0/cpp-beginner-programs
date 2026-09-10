#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Number : ";
    cin>>a;
    if(a%5==0){
        cout<<"Divisible hai 5  : ";}
    else if(a%11==0){
        cout<<"Divisible hai 11 : ";
    }
    else{
        cout<<"nahi hai 5 or 11 se divisible :";
    }
    return 0;
}
