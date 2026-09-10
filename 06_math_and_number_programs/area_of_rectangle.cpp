#include<iostream>
using namespace std;

int rectangle(int length , int wigth){
 return length*wigth;
}

int main(){
    int length, wigth;

cout<<"Enter length : ";
cin>>length;
cout<<"Enter wigth : ";
cin>>wigth;

cout<< rectangle(length,wigth);
return 0; 
}