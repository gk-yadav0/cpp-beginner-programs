#include<iostream>
using namespace std;
int main() {
int a,b,c,d,e,f,i,j,h;  char g;
   cout<<"enter number : "; cin>>a;
   cout<<"enter oprater  number : "; cin>>g;
   cout<<"enter second number : "; cin>>c;
  d=a+c; e=a-c; f=a*c;
  h=a/c; i=a%c; j=a^c;
    
if(g=='+'){ cout<<"addition : "<<d<<endl; }
else if(g=='-'){ cout<<"substraction : "<<e<<endl; }
else if(g=='*'){ cout<<"Multiplie : "<<f<<endl; }
else if(g=='/'){ cout<<"Devision : "<<h<<endl; }
else if(g=='%'){ cout<<"Modeuls : "<<i<<endl; }
else if(g=='^'){ cout<<"exor : "<<j<<endl; }
else {
   cout<<"Please enter right Oprater || ";      }
   cout<<"Thank for Using My Calculator :\nPress Enter For Exit ";
return 0;
}