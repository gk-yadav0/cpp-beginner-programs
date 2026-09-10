//53. Write a program to sort the 2D array into ascending order?

#include<iostream>
using namespace std;

int main()
{
    int a[2][4] = {
        {25,45,13,43},
        {45,15,75,15}
    };

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            for(int r=0; r<2; r++){
                for(int c=0; c<4; c++){
                    if(a[i][j] < a[r][c]){
                    int temp = a[i][j];
                    a[i][j] = a[r][c];
                    a[r][c] = temp;
            }  } 
                }  }
    }

    cout << "Assending order:\n";
    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            cout << a[i][j] << " ";   }
        cout << endl;  }

    return 0; }