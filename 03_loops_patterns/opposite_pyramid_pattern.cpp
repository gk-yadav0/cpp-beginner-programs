#include<iostream>
using namespace std;
int main(){
    int a;



    
    char b;
    cout<<"Enter Pyramid Number : a ";
    cin>>a;
    
    cout<<"Enter Pyramid Symbol : ";
    cin>>b;

for(int c=a;c>=1;c--){
    for(int j=1;j<=c;j++){
          cout<<b;   }
    cout<<endl;   }

return 0;   }