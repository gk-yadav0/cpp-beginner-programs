#include<iostream>
using namespace std;
int main(){
    
    int arr[4] = {1,2,3,4};
        int big = arr[0];
    for(int s=0; s<4; s++){
            if (arr[s] > arr[s+1]){
                arr[s+1] = arr[s];}}
             
                cout<<"Big : "<<arr[s+1];
            }