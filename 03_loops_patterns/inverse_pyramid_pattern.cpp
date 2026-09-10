#include<iostream>
using namespace std;
int main(){
int b;
char c;

cout<<"enter inword pyramid line : b  ";
cin>>b;
cout<<"enter pyramid symbol want you : ";
cin>>c;

for(int i=1;i<=b;i++){
    for(int g=b;g>i;g--){
       cout<<" ";}
    
     for(int j=1;j<=i;j++){
        cout<<c;  }
        
        cout<<endl;  }
    return 0; }