//WAP to find maximum element in a given matrix.

//same way as 1D array.



#include <iostream>
using namespace std;
int main(){
   int arr[4][2] = {{ 2,67},{4,54},{12,99},{10,87}};
    
   int mx = INT_MIN;

   for( int i=0;i<4;i++){
    for(int j=0;j<2;j++){
        
        mx = max(mx,arr[i][j]);
    }

   }
 cout<<mx;
}


