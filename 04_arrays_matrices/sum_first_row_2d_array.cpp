//56. Write a program to create 2D array and sum of the first row?

#include<iostream>
using namespace std;

int main()
{
    int a[5][4] = {
        {25,45,13,43},
        {23,43,12,54},
        {46,14,15,17},
        {89,68,65,47},
        {23,76,12,76}};
    int sum = 0;   

    for(int s=0; s<4; s++) {
        
       
            cout << a[0][s] << " ";
            sum = sum + a[0][s]; 
        cout<<"Sum : "<<sum;
        cout<< endl; }

    return 0; }