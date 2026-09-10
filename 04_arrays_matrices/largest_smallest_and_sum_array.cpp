// 50. Write a program to find Greatest and smallest number and sum it in array?

#include<iostream>
using namespace std;
int main(){
    int a[4] = {25,45,13,43};
    int biggest = a[0];
    int smallest = a[0];
    int sum;
       for(int i=0; i<4; i++) {
            cout<<a[i]<<" ";
            if(a[i]<smallest)
            {smallest= a[i];}
            if(a[i]>biggest)
           {biggest= a[i];} }
            cout<<endl;
            cout<<"smallest = "<<smallest<<endl;
            cout<<"biggest = "<<biggest;
            sum = biggest+smallest;
            cout<<endl<<"Sum Big or Small : "<<sum;
            return 0;
}