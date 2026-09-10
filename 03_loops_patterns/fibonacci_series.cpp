#include<iostream>
using namespace std;
int main(){
   int f=0;
   int n,f1;
   cout<<"enter Fibonacci number : ";
   cin>>f1;
   int s=1;
   while(s<=f1){
       n=f+s;
       f=s;
       s=n;
         cout<<f<<endl;
}

     
return 0; }
