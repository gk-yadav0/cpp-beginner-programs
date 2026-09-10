#include<iostream>
using namespace std;
int main(){

    char sum=0;
char arry[3][3] ={{'a','b','c'},
                 {'d','e','f'},
                 {'g','h','i'}};

   for(int i=0; i<3 ; i++){
    for(int j=0; j<3 ; j++){
        if(i==0 && j==0 || i==0 && j==2 || i==2 && j==0 || i==2 && j==2){
            cout<<arry[i][j];
        }    }   }
 return 0;
}               

