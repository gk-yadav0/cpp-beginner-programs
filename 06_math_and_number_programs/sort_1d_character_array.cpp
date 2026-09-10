#include<iostream>
using namespace std;
int main() {

    char arry[5] = {'a','d','f','e','g'};

    
       for(int j = 0; j < 5; j++) {
          for(int k = j + 1; k < 5; k++) {
             if(arry[j] > arry[k]) {
       char temp = arry[j];
       arry[j] = arry[k];
       arry[k] = temp;
       } 
     } 
      cout << arry[j] << " "; }
        cout << endl;  

    return 0;}