#include<iostream>
using namespace std;
int main() {
    int arry[5][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    int sum = 0;
    for(int i=0; i<4; i++) {
       
         sum = sum + arry[0][i]; 
         sum = sum + arry[4][i];  }        
    for(int i=1; i<4; i++) {
            sum = sum + arry[i][0]; 
            sum = sum + arry[i][3]; }
    cout<<"sum of outer body : "<<sum; 

    return 0; }