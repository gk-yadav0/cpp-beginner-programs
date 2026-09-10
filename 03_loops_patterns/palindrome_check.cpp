#include <iostream>
using namespace std;

int main() {
int a,a1,s,t;
    cout<<"Enter a Number: ";
    cin>>a;
    a1=a;
    t=0;
    while(a>0) {
        s=a%10;         
        t=t*10+s;    
        a=a/10; }

    if(a1==t) {
    cout << "Palindrome Number"; }
    else {
    cout << "Not a Palindrome Number"; }

    return 0; }