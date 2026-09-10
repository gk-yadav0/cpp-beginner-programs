#include<iostream>
using namespace std;
int main(){
    
    int arr[2][4] = {{1,2,3,4},{1,2,3,4}};
int sum = 0;
     for(int i=0; i<2; i++){
        for(int s=0; s<4; s++){
            sum += arr[i][s] ;
        
     }
}cout<<sum;
return 0 ;}