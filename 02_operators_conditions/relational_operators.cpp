  #include<iostream>
  using namespace std;
  int main()
  {
    int a,b;
  cout<<"Enter Integer : ";
  cin>>a;
  cout<<"Enter Integer : ";
  cin>>b;
  if(a==b){
  cout<<"Same Number :";  }
  if(a!=b){
  cout<<"not same Number :"<<endl ;}
  if(a>b){
  cout<<"Greater Number is a :"<<a; }
  if(a<b){
  cout<<"Greater Number is b :"<<b; }
  else {
  cout<<"Wrong Number Try Again ;"; }
  return 0;
  }