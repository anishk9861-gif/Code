//to print transpose of a matrix , we can do is :


#include <iostream>
using namespace std;
int main(){
   int arr[4][2] = {{ 2,67},{4,54},{12,99},{10,87}};
   
   
// for( int i=0;i<4;i++){
    // for(int j=0;j<2;j++)        //we can simple interchange both for loops .


    for( int j=0;j<2;j++){
    for(int i=0;i<4;i++){
        cout<<arr[i][j]<<"      ";
    }

    cout<<endl;
   }

}

