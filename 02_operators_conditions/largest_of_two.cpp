#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"a number : ";
     cin>>a;
     cout<<"b number : ";
      cin>>b;
     cout<<"c number : ";
      cin>>c;
     
    if(a>b>c){
        cout<<"A Greater : "<<a<<endl;
         }
         else if(c>a&&b){
        cout<<"C Greater : "<<c<<endl;
         }
    else{
        cout<<"B Greater : "<<b; }
        return 0;
    }