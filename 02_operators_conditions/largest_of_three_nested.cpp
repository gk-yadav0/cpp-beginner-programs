#include<iostream>
using namespace std;
int main(){

    int a,b,c;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    cout<<"enter c : ";
    cin>>c;
    cout<<(a>b&&a>c?"A is Grater ":(b>a&&b>c?"B Greater ":(c>a&&c>b?"C greater ":"Invilad number"))) ;
    return 0;
}