//52. Write a program to find smallest number from 2D array?
#include<iostream>
using namespace std;
int main(){
    int a[2][4] = {
        {25,45,13,43},
        {23,44,12,54}
    };
  int smallest = a[0][0];
    for(int s=0; s<2; s++) {
        for(int i=0; i<4; i++) {
            cout<<a[s][i]<<" ";
            if(a[s][i]<smallest)
            {smallest= a[s][i];} }
            cout<<endl; }
      cout<<"Smallest = "<<smallest;
  return 0;
}