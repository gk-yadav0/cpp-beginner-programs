#include<iostream>
using namespace std;
int main(){
int b;
char c;
cout<<"enter pyramid line want you : b  ";
cin>>b;
cout<<"enter pyramid symbol want you : ";
cin>>c;

for(int i=b;i>=1;i--){
    for(int g=i;g<=b;g++){
       cout<<" ";}
    
     for(int j=1;j<=i;j++){
        cout<<c;  }
        
        cout<<endl;  }
    return 0; }