#include<iostream>
using namespace std;
int main(){
        char c;
    cout<<" Symbol : ";
    cin>>c;  
    for (int i=1;i<=3;i++){
        
        for(int j =1;j<=5;j++){
          if(j==1||j==5||i==1||i==3){
             cout<<c;
          }
          else{
            cout<<" ";
          }
      
    }cout<<endl;

    }

}
