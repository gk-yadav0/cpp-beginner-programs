#include<iostream>
using namespace std;
int main(){

    int a;
    cout<<"Enter percentage : ";
    cin>>a;

    if(a<=33){
        cout<<"Fail";}
    else if(a>33&&a<50){
        cout<<"D Grade ";}
    else if(a>50&&a<75){
        cout<<"C Grade ";}
    else if(a>75&&a<90){
        cout<<"B Grade ";}
    else if(a>90){
        cout<<"A Grade";
    }

    }