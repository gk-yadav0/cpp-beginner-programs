//54. Write a program to sort the 1D array  into descending order?

#include<iostream>
using namespace std;
int main(){

    int a[4] = {25,45,13,43};
       for(int i=0; i<4; i++){
    
        int Biggest = i;
        for(int j=i+1; j<4; j++){
            if(a[j] > a[Biggest])  {
            Biggest = j; }  }
    
            int temp = a[i];
        a[i] = a[Biggest];
        a[Biggest] = temp; 
    
    cout << a[i] << " "; }
   
        
     return 0; }