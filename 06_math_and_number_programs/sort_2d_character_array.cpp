#include<iostream>
using namespace std;
int main() {

    char arry[2][5] = {{'a','d','f','e','g'},
        {'i','k','j','s','o'}};

    for(int i = 0; i < 2; i++) {
                  for(int j = 0; j < 5; j++) {
          for(int k = j + 1; k < 5; k++) {
             if(arry[i][j] > arry[i][k]) {
       char temp = arry[i][j];
       arry[i][j] = arry[i][k];
       arry[i][k] = temp; }  }    
      cout << arry[i][j] << " "; }
        cout << endl;  }

    return 0;}