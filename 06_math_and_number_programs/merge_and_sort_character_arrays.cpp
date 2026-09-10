#include <iostream>
using namespace std;
int main()
{
        char arry1[3] = {'k', 'e', 'f'};
        char arry2[3] = {'m', 'l', 'a'};
        char arr[] = {0};

        // 2 oneD ko 1 2d banya jise bad me 2se 1 kiya hai
        for (int i = 0; i < 6; i++)
        {
                arr[i] = arry1[i];
                arr[i] = arry2[i];
                cout<<arr[i]<<" ";
        }
           cout<<endl;
        for(int j = 0; j < 6; j++) {
          for(int k = j + 1; k < 6; k++) {
             if(arr[j] > arr[k]) {
       char temp = arr[j];
       arr[j] = arr[k];
       arr[k] = temp;
       } 
     }cout << arr[j] << " "; }
        cout << endl;   


    return 0;}