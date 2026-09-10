#include<iostream>
using namespace std;
int main(){

    int arr[5] = {1,3,2,6,4};
        for(int i=0; i<5; i++){
            int small = i;
            for(int s=i+1; s<5; s++){
                if (arr[s] < arr[small]){
                    small = s;}}
                    int temp = arr[i];
                    arr[i] = arr[small];
                    arr[small] = temp;
            
                    cout<<endl<<arr[i]<<" ";
                }
                return 0;
}
