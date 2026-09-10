#include<iostream>
using namespace std;
int main(){
char a;
int c,b;
cout<<"enter NUmber first ";
cin>>c;
cout<<"enter oprater : ";
cin>>a;
cout<<"enter NUmber first ";
cin>>b;
switch(a)
{ case '+' :
cout<<c+b<<"";break;
case '-' :
cout<<"Subs : "<<c-b;break;
case '*' :
cout<<"Multiply : "<<c*b;break;
 case '%' :
cout<<"Moduls : "<<c%b;break;
case '/' :
cout<<"Divide : "<<c/b;break;

default:
cout<<"Wrong Oprater " ;}
	   return 0;
	   }