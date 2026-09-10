#include<iostream>
using namespace std;
int main(){
        char c;
    cout<<" Symbol13 : ";
    cin>>c;  
    for (int i=1;i<=5;i++){

        for(int s=5;s>i;s--){
            cout<<" ";         }
        for(int j=1;j<=i;j++){
            cout<<c;   }
          for(int f=1;f<i;f++){
            cout<<c;
          }  
         
         
            cout<<endl;}

}
