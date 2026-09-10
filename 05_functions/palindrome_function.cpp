#include <iostream>
using namespace std;
int palindrome(int num){
    int s,t;
  int num1=num;
    t=0;
    while(num>0) {
        s=num%10;         
        t=t*10+s;    
        num=num/10; }

    if(num1==t) {
    cout << "Palindrome Number"; }
    else {
    cout << "Not a Palindrome Number"; }

}
int main() {
    int num;
    cout<<"Enter Number : ";
    cin>>num; 
    cout<<palindrome(num);

    return 0; }