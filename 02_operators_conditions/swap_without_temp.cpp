#include<iostream>
using namespace std;
int main(){
   int a,b,c;
    cout<<"value a : ";
    cin>>a;
    
    cout<<"value b : ";
    cin>>b;
    
    c=a;
    a=b;
    b=c;
    
    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b;
    
}