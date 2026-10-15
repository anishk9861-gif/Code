//wap to reverse the array without using any extra array.



//hint - using swapping . use two variables or pointers.
//we will do while loop to solve , for loop can be used too.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {12,6,7,34,9,230,2,8};
    int n = sizeof(a)/4;
    int i = 0;
    int j = n-1;

    for(int i = 0 ; i<n ; i++){
    cout<<a[i]<<" ";
  }  

    while(i<j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;

        i++;
        j--;
    }

    cout<<endl<<endl;
  for(int i = 0 ; i<n ; i++){
    cout<<a[i]<<" ";
  }  
    
    
}


    


