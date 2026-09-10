#include<iostream>
using namespace std;

int main()
{
    int a[5][4] = {
        {25,45,13,43},
        {23,43,12,54},
        {46,14,15,17},
        {89,68,65,47},
        {23,76,12,76}
    };
    for(int s=0; s<5; s++) {
        
        for(int e=0; e<4; e++) {
            cout << a[s][e] << " ";}cout<<endl; }
        return 0;}