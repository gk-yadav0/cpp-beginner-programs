#include<iostream>
using namespace std;
int main(){
//a (final amount)= p(str amt)(1+r/n(time per year))power nt
// i(intrest earned on or paid ) = p(starting amount of money) x r ( annual intrest rate) x t(time)
float a,p,r,t;
  cout<<"enter Starting amount : ";
  cin>>p;
  cout<<"enter Rate : ";
  cin>>r;
  cout<<"enter Time : ";
  cin>>t;

  a = p*r*t;
  cout<<" "<<a;
  return 0;
}