#include<iostream>
using namespace std;
int power(int num1, int num2) {
    int a = 1;

    while(num2>0){
        a = a * num1;
        num2--;
    }

    return a;
}

int main(){
 int num1,num2;
 cout<<"num1 : ";
 cin>>num1;
 cout<<"num2 : ";
 cin>>num2;

    cout<<power(num1,num2);
 return 0;
}