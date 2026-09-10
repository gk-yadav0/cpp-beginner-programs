//49. Write a program to find smallest number from the array?

#include<iostream>
using namespace std;
int main(){
    int a[4] = {25,45,13,43};
  int Smallest = a[0];
       for(int i=0; i<4; i++) {
            cout<<a[i]<<" ";
            if(a[i]<Smallest)
            {Smallest= a[i];} }
            cout<<endl; 
      cout<<"Smallest = "<<Smallest;
  return 0;
}