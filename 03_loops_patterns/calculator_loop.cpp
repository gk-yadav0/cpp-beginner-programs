#include<iostream>
using namespace std;
int main(){
char a,d;
int c,b;
d='y';
while(d=='y'){
cout<<"enter NUmber first ";
cin>>c;
cout<<"enter oprater : ";
cin>>a;
cout<<"enter NUmber first ";
cin>>b;
cout<<"countinue y/n : ";
cin>>d; 
switch(a)
{ case '+' :
cout<<"Add : "<<c+b<<endl;break;
case '-' :
cout<<"Subs : "<<c-b<<endl;break;
case '*' :
cout<<"Multiply : "<<c*b<<endl;break;
 case '%' :
cout<<"Moduls : "<<c%b<<endl;break;
case '/' :
cout<<"Divide : "<<c/b<<endl;break;

default:
cout<<"Wrong Oprater " ;}}

	return 0; }