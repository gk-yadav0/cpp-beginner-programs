#include<iostream> 
 using namespace std;
 int main(){
  
  int a,b,c,d;
  cout<<"enter a First number : ";
  cin>>a;
  cout<<"enter b Second number : ";
  cin>>b;
  cout<<"enter c Third Number : ";
  cin>>c;
  cout<<"enter d fourth number : ";
  cin>>d;
  if(a>b>c>d) {
  cout<<"A is Greater : "<<a; }
  else if(b>a&&c)  {
  cout<<"B is greater : "<<b; }
  else if(c>a&&b&&d) {
  cout<<"C is greater : "<<c; }
  else if(d>a&&b&&c) {
  cout<<"D is Greater : "<<d; }
  else if(d==a&&a==c&&a==b&&d==b&&d==c&&b==c){
  cout<<" please dont enter same number :-";  }
  else
  { cout<<"Big numbers are same : "; }
  
  return 0;
  }

