
#include<iostream> 
 using namespace std;
 int main(){
  
  int a,b,c;
  cout<<"enter a First number : ";
  cin>>a;
  cout<<"enter b Second number : ";
  cin>>b;
  cout<<"enter c Third Number : ";
  cin>>c;
  if(a>b&&a>c || b>a&&b>c || c>a&&c>b){ 
    if(b>c&&b>a)  {
  cout<<"B is greater : "<<b; }
    if(c>b&&c>a) {
  cout<<"C is greater : "<<c; }
    if(a>b&&a>c) {
  cout<<"A is greater : "<<a; }}
  else
  {cout<<"invilad Number ";}
  
  return 0;
  }