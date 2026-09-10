#include<iostream>
using namespace std;

int three_gretest(int a, int b, int c){
      if(a>b>c){
        cout<<"A Greater : "<<a<<endl;
         }
         else if(c>a&&b){
        cout<<"C Greater : "<<c<<endl;
         }
    else{
        cout<<"B Greater : "<<b; }}
        
int main(){
    int a,b,c;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    cout<<"enter c : ";
    cin>>c;

    return three_gretest(a,b,c);

}
