//51. Write a program to find greatest number from 2D array?

#include<iostream>
using namespace std;
int main(){
    int a[2][4] = {
        {25,45,13,43},
        {23,44,12,54}
    };
  int Biggest = a[0][0];
    for(int s=0; s<2; s++) {
        for(int i=0; i<4; i++) {
            cout<<a[s][i]<<" ";
            if(a[s][i]>Biggest)
            {Biggest= a[s][i];} }
            cout<<endl; }
      cout<<"Biggest = "<<Biggest;
  return 0;
}