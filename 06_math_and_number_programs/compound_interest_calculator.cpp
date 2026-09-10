#include<iostream>
using namespace std;
int main(){
double p=10000,r=0.05;
int t=3,n=4;
float a,s=1;
  cout<<"enter Starting amount : ";
  cin>>p;
  cout<<"enter Rate : ";
  cin>>r;
  cout<<"enter Time : ";
  cin>>t;
  cout<<"enter year : ";
  cin>>n;

   // A=P(1+R/N)nt
   
   a = (1+r/n);
   cout<<a<<endl;
   int d = n*t;
       cout<<d<<endl; 
      while(d>0){
        s = s * a;
        d--;
      } cout<<s<<endl;
    float f = p*s;

    cout<<f;

return 0;}