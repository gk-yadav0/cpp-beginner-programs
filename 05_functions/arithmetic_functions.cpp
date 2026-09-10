#include<iostream>
using namespace std;

int sum(int a, int b){return a+b;}

int sub(int c, int d){return c-d;}

int divide(int e, int f){return e/f;}

int multiple(int g, int h){return g*h;}

int main(){
    // Sum ---->
    int a = 10 ,b = 10;
    cout<<"Sum is : "<<sum(a,b)<<endl;

    //Sub ---->
    int c = 10 ,d = 10;  
    cout<<"Substraction is : "<< sub(c,d)<<endl;
   
    //Divide ---->
    float e = 10,f = 10;     
    cout<<"Divide is : "<< divide(e,f)<<endl;
    
    //Multiple ---->
    int g = 10,h = 10;     
    cout<<"Multiple is : "<< multiple(g,h);
  return 0;
}